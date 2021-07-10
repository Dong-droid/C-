//문장 입력 받아서 단어 뒤집기
//scanner로 하면
//처음에 숫자 입력받고나서
//sc.nextLine()로 개행문자를 한 번 먹어줘야 한다.
public class Main {
      static Scanner sc=new Scanner(System.in);    	
      public static void main(String[] args) throws IOException {    	
    	 StringBuffer answer=new StringBuffer();
    	 StringBuffer temp=new StringBuffer();    	
    	 BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out)); //버퍼
    	 BufferedReader  br = new BufferedReader(new InputStreamReader(System.in)); //  버퍼
       
    		int n=Integer.parseInt(br.readLine());
        
    		for(int i=0;i<n;i++) { 
    		 str[i]=br.readLine(); 
    		 } 		 
    		 br.close();
    	
    	 String [][] ar=new String[n][];
    	 for(int i=0;i<n;i++) {
    		 answer.setLength(0);//초기화
    		 ar[i]=str[i].split(" "); //reverse 사용
    		 for(int j=0;j<ar[i].length;j++) {
    			 temp.setLength(0);
    			 temp.append(ar[i][j]);
    			 answer.append(temp.reverse()).append(" ");	
    		 }
    		 bw.write(answer.toString()+'\n');
    		 bw.flush();
    	
    		 }
    	 bw.close();
    	
      }
      
      import java.io.*;
//더 나은 코드
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int count = Integer.parseInt(br.readLine());

        for(int i = 0; i < count; i++){
            String str = br.readLine();

            String[] split = str.split(" ");

            for (String s : split) { //for each문 사용
                for (int j = s.length() - 1; j >= 0; j--) {
                    bw.write(s.charAt(j)); //뒤 문자부터 출력
                }
                bw.write(" ");
            }

            bw.write("\n");
        }

        bw.flush();
    }
}
//c++
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  cin.ignore(); //입력버퍼 지우기
  //cin은 '\n'를 변수에 담지 않는다. (입력버퍼에 남겨둔다.)
  //getline은 '\n'를 변수에 담는다.
  while (t--) {
    string s; getline(cin, s);
    int size = s.size();
    int lastPos = 0;
    for (int i = 0; i < size; i++) {
      if (s[i] == ' ') {
        reverse(s.begin() + lastPos, s.begin() + i);
        lastPos = i + 1;
      }
    }
    reverse(s.begin() + lastPos, s.end());
    cout << s << '\n';
  }
  return 0;
}
