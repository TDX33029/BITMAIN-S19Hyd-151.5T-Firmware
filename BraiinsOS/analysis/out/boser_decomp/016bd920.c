// FUN_016bd920 @ 016bd920 size=132 calls_out=2 calls_in=2
// strings: 

void FUN_016bd920(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int local_1a8 [100];
  
  FUN_016bd9a4(local_1a8);
  if (local_1a8[0] == -0x7ffffff9) {
    *(undefined1 *)(param_1 + 0xc) = 2;
  }
  else {
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_2 + 8);
      if (param_3 != 1) {
        uVar2 = param_3 - 1U & 0xfffffff;
        puVar1 = (uint *)(param_2 + 0x18);
        do {
          if (uVar3 <= *puVar1) {
            uVar3 = *puVar1;
          }
          uVar2 = uVar2 - 1;
          puVar1 = puVar1 + 4;
        } while (uVar2 != 0);
      }
    }
    FUN_016bdd60(param_1,local_1a8,uVar3);
  }
  return;
}

