// FUN_00030c34 @ 00030c34  size=436  callers=0
// program: bmminer


void FUN_00030c34(int param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  char acStack_828 [2052];
  
  if (param_2 == 0) {
    iVar8 = param_1 * 0x100;
    iVar1 = FUN_0002002c();
    uVar5 = 0;
    iVar6 = 0;
    if (iVar1 != 0) {
      do {
        piVar7 = (int *)((uVar5 + iVar8) * 0x1000 + 0x8b9c0);
        uVar3 = 0;
        while( true ) {
          uVar2 = FUN_0002005c();
          if (uVar2 <= uVar3) break;
          piVar7 = piVar7 + 1;
          iVar6 = iVar6 + *piVar7;
          uVar3 = uVar3 + 1;
        }
        uVar5 = uVar5 + 1;
        uVar3 = FUN_0002002c();
      } while (uVar5 < uVar3);
    }
    iVar1 = (param_1 + 0x100404) * 4;
    iVar4 = *(int *)(&DAT_0008a9b8 + iVar1);
    *(int *)(&DAT_0008a9b8 + iVar1) = iVar6;
    *(int *)(&DAT_0008a9b4 + param_1 * 4) = iVar6 - iVar4;
  }
  else {
    iVar8 = param_1 << 8;
    iVar6 = *(int *)(&DAT_0008a9b8 + (param_1 + 0x100404) * 4);
  }
  *param_3 = iVar6;
  iVar6 = 0;
  piVar7 = (int *)((iVar8 + param_2) * 0x1000 + 0x8b9c0);
  *param_4 = *(int *)(&DAT_0008a9b4 + param_1 * 4);
  uVar5 = 0;
  while( true ) {
    uVar3 = FUN_0002005c();
    if (uVar3 <= uVar5) break;
    piVar7 = piVar7 + 1;
    iVar6 = iVar6 + *piVar7;
    uVar5 = uVar5 + 1;
  }
  iVar4 = iVar8 + param_2 + 4;
  iVar8 = (iVar8 + param_2 + 0x100408) * 4;
  iVar1 = *(int *)(&DAT_0008a9b8 + iVar8);
  *(int *)(&DAT_0008a9b8 + iVar8) = iVar6;
  *(int *)(&DAT_0008a9b4 + iVar4 * 4) = iVar6 - iVar1;
  *param_5 = iVar6;
  iVar8 = *(int *)(&DAT_0008a9b4 + iVar4 * 4);
  *param_6 = iVar8;
  if (4 < DAT_00087bbc) {
    snprintf(acStack_828,0x800,
             "chain[%d] aisc[%d] total asic nonce number:%d, total chain nonce number:%d; increased asic nonce number:%d, increased chain nonce number:%d\n"
             ,param_1,param_2,*param_5,*param_3,iVar8,*param_4);
    FUN_00032218(4,acStack_828,0);
  }
  return;
}

