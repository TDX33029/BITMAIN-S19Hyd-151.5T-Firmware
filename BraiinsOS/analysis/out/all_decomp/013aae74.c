// FUN_013aae74 @ 013aae74 size=320 calls_out=3 calls_in=0
// strings: 

bool FUN_013aae74(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  bVar2 = false;
  if (uVar4 <= uVar5) {
    if (*param_3 - 1U < 2) {
      if (uVar4 < (uint)param_3[3]) {
        cVar1 = *(char *)(param_3[2] + uVar4);
        return (*(char *)(param_1 + 4) == cVar1 || *(char *)(param_1 + 5) == cVar1) ||
               *(char *)(param_1 + 6) == cVar1;
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
      uVar6 = FUN_005f70a0(&local_24,iVar3,param_3[2] + uVar5);
      if ((uVar6 & 1) == 0) {
        return false;
      }
      bVar2 = true;
      if (((int)(uVar6 >> 0x20) - iVar3) + uVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
      }
    }
  }
  return bVar2;
}

