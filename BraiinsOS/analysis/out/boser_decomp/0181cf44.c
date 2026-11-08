// FUN_0181cf44 @ 0181cf44 size=116 calls_out=1 calls_in=0
// strings: 

void FUN_0181cf44(int param_1,int *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_1 != 0) {
    iVar6 = 0;
    iVar3 = -4;
    do {
      if (-1 < *(char *)(*param_2 + iVar6)) {
        puVar1 = (undefined4 *)(*param_2 + iVar3);
        puVar4 = (undefined4 *)*puVar1;
        uVar5 = puVar1[-1];
        pcVar2 = (code *)*puVar4;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(uVar5);
        }
        if (puVar4[1] != 0) {
          thunk_FUN_01be4678(uVar5);
        }
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -0x18;
    } while (param_1 != iVar6);
  }
  return;
}

