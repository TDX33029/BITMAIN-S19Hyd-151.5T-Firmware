// FUN_01583a28 @ 01583a28 size=104 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01583a28(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  if (*param_2 == '\x05') {
    if (*(uint *)(param_1 + 8) <= *(uint *)(param_2 + 0xc)) {
      iVar3 = *(int *)(param_1 + 4);
      uVar5 = *(undefined4 *)(param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 8);
      iVar2 = *(uint *)(param_1 + 8) * 0xc;
      do {
        if (iVar2 == 0) {
          return 1;
        }
        iVar1 = FUN_0196b2cc(uVar5,uVar4,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
        iVar2 = iVar2 + -0xc;
        iVar3 = iVar3 + 0xc;
      } while (iVar1 != 0);
    }
    uVar5 = 0;
  }
  return uVar5;
}

