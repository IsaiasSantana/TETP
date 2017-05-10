//package uri;
//
//import java.io.BufferedReader;
//import java.io.IOException;
//import java.io.InputStreamReader;
//import java.util.ArrayList;
//import java.util.Collections;
//
//class Contestant implements Comparable<Contestant>
//{
//	boolean submit;
//	
//	int tempo;
//	int problemasResolvidos;
//	int problemasIncorretos;
//	int numeroTime;
//	void addProblemasResolvidos(int tempo)
//	{
//		problemasResolvidos++;
//		this.tempo+=tempo;
//	}
//	
//	void addProblemasIncorretos()
//	{
//		problemasIncorretos++;
//	}
//	
//	 int getTotalPenalidade()
//	 {
//		 return tempo + 20*problemasIncorretos;
//	 }
//
//	@Override
//	public int compareTo(Contestant o) 
//	{
//		if(this.problemasResolvidos != o.problemasResolvidos)
//		{
//			if (new Integer(this.problemasResolvidos).compareTo(new Integer(o.problemasResolvidos)) > 0) return 1 ;
//		}
//		if(this.tempo != o.tempo)
//		{
//			if( new Integer(this.tempo).compareTo(new Integer(o.tempo)) > 0) return 1;
//		}
//		return new Integer(numeroTime).compareTo(new Integer(o.numeroTime));
//	}
//	 
//}
//
//class ContestantScore
//{
//	char submicao;
//	int penalidade;
//	int numeroEquipe;
//}
//
//public class Main
//{
//	public static void main(String[] args) throws IOException
//	{
//		
//		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
//		
//		int n = Integer.valueOf(entrada.readLine());
//		
//		System.out.println();
//		
//		for(int i = 0; i < n; i++)
//		{
//			ArrayList<Contestant> scores = new ArrayList<>();
//			ArrayList<ArrayList<ContestantScore>> board = new ArrayList<>();
//			
//			for(int x = 0; x <= 99; x++)
//			{
//				board.add(new ArrayList<>());
//				scores.add(new Contestant());
//			}
//			
//			String[] line = entrada.readLine().split("[ ]");
//			
//			while(line != null )
//			{
//				int constestant = Integer.valueOf(line[0]);
//			//	int problemNumber = Integer.valueOf(line[1]);
//				int time = Integer.valueOf(line[2]);
//				char label = line[3].charAt(0);
//				
//				if(label == 'C' || label == 'I')
//				{
//					ArrayList<ContestantScore> array = board.get(constestant-1);
//					
//					ContestantScore cs = new ContestantScore();
//					
//					cs.penalidade = time;
//					cs.submicao = label;
//					cs.numeroEquipe = constestant;
//					
//					array.add(cs);
//					
//				//	board.add(constestant-1, array);					
//					
//					scores.get(constestant-1).submit = true;
//					
//					scores.get(constestant-1).numeroTime = constestant;
//				}			
//				
//				line = entrada.readLine().split("[ ]");
//			}
//			
//		for(int y = 0; y <= 99; y++)
//		{
//			
//			if(scores.get(y).submit)
//			{
//				ArrayList<ContestantScore> array = board.get(y);
//				for(ContestantScore cs: array)
//				{
//					switch(cs.submicao)
//					{
//						case 'I':
//							scores.get(y).problemasIncorretos++;
//							break;
//						case 'C':
//							scores.get(y).addProblemasResolvidos(cs.penalidade);
//							break;
//					}
//				}
//			}
//		}
//		
//		Collections.sort(scores);
//		for(Contestant c: scores){
//			if(c.submit) System.out.println(c.numeroTime+" "+c.problemasResolvidos+" "+c.getTotalPenalidade());
//		}
//		
//		System.out.println();
//	}
//	}
//}
//
//
//
//
//
//
//
//
//
//
//
//
//import java.io.BufferedReader;
//import java.io.IOException;
//import java.io.InputStreamReader;
//import java.io.PrintWriter;
//import java.util.StringTokenizer;
// 
///**
// * 
// * @author Sanchit M. Bhatnagar
// * @see http://uhunt.felix-halim.net/id/74004
// * 
// */
//public class P10205 {
// 
//  public static void main(String[] args) throws IOException {
//    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//    PrintWriter out = new PrintWriter(System.out);
//    String line = null;
//    StringTokenizer st = null;
// 
//    int cases = Integer.parseInt(br.readLine());
//    br.readLine(); // Read blank line.
// 
//    for (int zz = 0; zz < cases; zz++) {
//      if (zz != 0)
//        out.println();
// 
//      int shuffles = Integer.parseInt(br.readLine());
//      int[][] caesar = new int[shuffles][52];
//      for (int i = 0; i < shuffles; i++) {
//        int count = 0;
//        while (count < 52) {
//          st = new StringTokenizer(br.readLine());
//          while (st.hasMoreTokens()) {
//            caesar[i][count] = Integer.parseInt(st.nextToken()) - 1;
//            count++;
//          }
//        }
//      }
// 
//      Card[] newDeck = new Card[52];
//      init(newDeck);
//      while ((line = br.readLine()) != null) {
//        if (line.trim().equals(""))
//          break;
//        int move = Integer.parseInt(line) - 1;
//        Card[] tmp = new Card[52];
//        for (int i = 0; i < 52; i++) {
//          tmp[i] = newDeck[caesar[move][i]];
//        }
//        newDeck = tmp;
//      }
//      for (int i = 0; i < 52; i++) {
//        out.println(newDeck[i]);
//      }
//    }
// 
//    out.close();
//    br.close();
//  }
// 
//  private static void init(Card[] newDeck) {
//    String[] suitOrder = new String[] { "Clubs", "Diamonds", "Hearts", "Spades" };
//    String[] order = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
//    for (int j = 0; j < 4; j++) {
//      for (int i = 0; i < 13; i++) {
//        newDeck[i + 13 * j] = new Card(order[i], suitOrder[j]);
//      }
//    }
//  }
// 
//  @SuppressWarnings("unused")
//  private static class Card {
//    String card;
//    String card2;
//    String num;
//    String suit;
// 
//    public Card(String num, String suit) {
//      card2 = num + " of " + suit;
//      this.num = num;
//      this.suit = suit;
//      if (this.num == "10") {
//        card = "T" + suit.charAt(0);
//      } else {
//        card = num.charAt(0) + "" + suit.charAt(0);
//      }
//    }
// 
//    public String toString() {
//      return this.card2;
//    }
//  }
//}
