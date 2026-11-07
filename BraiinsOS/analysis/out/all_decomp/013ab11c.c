// FUN_013ab11c @ 013ab11c size=372 calls_out=4 calls_in=0
// strings: 

void FUN_013ab11c(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

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
    return;
  }
  if (*param_3 - 1U < 2) {
    if ((uint)param_3[3] <= uVar4) {
      return;
    }
    cVar1 = *(char *)(param_1 + 4);
    cVar2 = *(char *)(param_3[2] + uVar4);
    bVar6 = cVar1 != cVar2;
    if (bVar6) {
      cVar1 = *(char *)(param_1 + 5);
    }
    if ((bVar6 && cVar1 != cVar2) && (*(char *)(param_1 + 6) != cVar2)) {
      return;
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
      return;
    }
    if (((int)(uVar7 >> 0x20) - iVar3) + uVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
    }
  }
  if (param_4[1] == 0) {
    local_20 = (undefined1 *)0x0;
    local_24 = (undefined1 *)0x0;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_003ce9ea,0x2a,&local_24,&DAT_018943f8,&DAT_018943e8);
  }
  if (*(char *)*param_4 == '\0') {
    iVar3 = param_4[2];
    *(char *)*param_4 = '\x01';
    param_4[2] = iVar3 + 1;
    return;
  }
  return;
}

