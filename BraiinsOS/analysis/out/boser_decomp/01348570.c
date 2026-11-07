// FUN_01348570 @ 01348570 size=288 calls_out=5 calls_in=1
// strings: 

void FUN_01348570(undefined4 param_1,int param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int local_30;
  int iStack_2c;
  uint uStack_28;
  int local_24;
  int local_20;
  uint local_1c;
  
  iVar3 = -0x80000000;
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar2 = 0;
    do {
      if (*(char *)(param_2 + uVar2) == '+') {
        FUN_0193a93c(&local_24,param_2,param_3);
        if (local_1c <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar2,local_1c,&DAT_01ce6c34);
        }
        *(undefined1 *)(local_20 + uVar2) = 0x20;
        if (uVar2 + 1 != local_1c) {
          iVar3 = ~uVar2 + local_1c;
          pcVar1 = (char *)(local_20 + uVar2 + 1);
          do {
            if (*pcVar1 == '+') {
              *pcVar1 = ' ';
            }
            iVar3 = iVar3 + -1;
            pcVar1 = pcVar1 + 1;
          } while (iVar3 != 0);
        }
        param_2 = local_20;
        param_3 = local_1c;
        iVar3 = local_24;
        break;
      }
      uVar2 = uVar2 + 1;
    } while (param_3 != uVar2);
  }
  FUN_016558d4(&local_30,param_2,param_2 + param_3);
  if (local_30 == -0x80000000) {
    local_30 = iVar3;
    iStack_2c = param_2;
    uStack_28 = param_3;
    FUN_013486cc(param_1,&local_30);
  }
  else {
    FUN_013486cc(param_1,&local_30);
    if (iVar3 != -0x80000000) {
      FUN_0134bd64(iVar3,param_2);
      return;
    }
  }
  return;
}

