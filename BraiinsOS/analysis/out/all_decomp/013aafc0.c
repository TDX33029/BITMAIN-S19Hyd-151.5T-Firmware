// FUN_013aafc0 @ 013aafc0 size=336 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_013aafc0(int param_1,undefined4 param_2,int *param_3,int *param_4,int param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  if (uVar5 < uVar4) {
    return 0;
  }
  if (*param_3 - 1U < 2) {
    if ((uint)param_3[3] <= uVar4) {
      return 0;
    }
    cVar1 = *(char *)(param_1 + 4);
    cVar2 = *(char *)(param_3[2] + uVar4);
    bVar6 = cVar1 != cVar2;
    if (bVar6) {
      cVar1 = *(char *)(param_1 + 5);
    }
    if ((bVar6 && cVar1 != cVar2) && (*(char *)(param_1 + 6) != cVar2)) {
      return 0;
    }
  }
  else {
    local_27 = *(undefined1 *)(param_1 + 4);
    local_26 = *(undefined1 *)(param_1 + 5);
    local_25 = *(undefined1 *)(param_1 + 6);
    if ((uint)param_3[3] < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar4,uVar5,param_3[3],&DAT_01893720);
    }
    local_1c = &local_25;
    local_20 = &local_26;
    iVar3 = param_3[2] + uVar4;
    local_24 = &local_27;
    uVar7 = FUN_005f70a0(&local_24,iVar3,param_3[2] + uVar5);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    uVar4 = ((int)(uVar7 >> 0x20) - iVar3) + uVar4;
    if (uVar4 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
    }
  }
  if (param_5 == 0) {
    return 1;
  }
  iVar3 = 1;
  if (param_5 != 1) {
    iVar3 = uVar4 + 2;
  }
  *param_4 = uVar4 + 1;
  if (param_5 != 1) {
    param_4[1] = iVar3;
  }
  return 1;
}

