#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *insults[28] = {
  "You are more disappointing than an unsalted pretzel.",
  "You look like you came from a donation pile.",
  "You need to go home and think about everything you are. Then change it.",
  "I think we've all got something to bring to this discussion, and from now on I think the thing you should bring is silence.",
  "Over the many years I have known all of you, I have come to regard you as....people I met.",
  "That was an important speech and it needed to be made. Might I suggest, however, that the rest of this discourse is continued by those with brains larger than a grape?",
  "Stupid people can believe in anything, so you can believe in yourself!",
  "It's impossible to underestimate you!",
  "Wow, I expected nothing from you and am still disappointed.",
  "I wish you were a speed bump for my tricycle.",
  "You are a gray sprinkle on a rainbow cupcake.",
  "You're like a lighthouse in the middle of a desert. Bright, but not a lot of use.",
  "This is why everyone talks about you behind your back.",
  "The worst thing about your guitar playing is that you don't know how bad you are at it.",
  "Why are you such a wet sandwich?",
  "If Mr. Rogers was your neighbor, he'd move.",
  "You're less a person and more a loose collection of personality flaws.",
  "You're like God spilled a person.",
  "Your life is more about regret management than goal achievement, isn't it?",
  "Everyone that has ever loved you was wrong.",
  "The only culture you have is bacteria.",
  "You're not pretty enough to get away with being that stupid.",
  "Your grades say 'marry rich,' but your face says 'study harder'.",
  "Bob Ross would call you a mistake.",
  "Apologize to that tree over there for wasting the oxygen that it worked so hard to make.",
  "If scientists found a way to convert brainpower into gasoline, you wouldn't have enough fuel to power an ant's go kart around the inside of a fruit loop.",
  "You’re the patient zero of dumbness aren’t you?",
  "It's incredible how much joy you can bring to a room by simply leaving it.",
};


int main() {
  time_t t;

  srand((unsigned) time(&t));
  int r = rand() % (sizeof(insults) / sizeof(insults[0]));

  printf("%s\n", insults[r]);
  return 0;
}

