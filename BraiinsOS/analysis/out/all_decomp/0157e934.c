// FUN_0157e934 @ 0157e934 size=144 calls_out=3 calls_in=3
// strings: 

void FUN_0157e934(int param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_1 + 8);
    iVar3 = 0;
    do {
      bVar1 = *(byte *)(puVar2 + -2);
      iVar3 = iVar3 + 1;
      if (2 < bVar1) {
        if (bVar1 == 3) {
          if (puVar2[-1] != 0) {
            uVar4 = *puVar2;
LAB_0157e9b4:
            thunk_FUN_016d3fb4(uVar4);
          }
        }
        else if (bVar1 == 4) {
          uVar4 = *puVar2;
          FUN_0157e934(uVar4,puVar2[1]);
          if (puVar2[-1] != 0) goto LAB_0157e9b4;
        }
        else {
          FUN_0157d38c(puVar2 + -1);
        }
      }
      puVar2 = puVar2 + 6;
    } while (param_2 != iVar3);
  }
  return;
}

