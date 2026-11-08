// FUN_01902cfc @ 01902cfc size=276 calls_out=6 calls_in=0
// strings: 

void FUN_01902cfc(int *param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 uStack_19;
  
  uVar2 = *(uint *)(param_2 + 0x20);
  if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0x20,&DAT_01d2575c);
  }
  FUN_00704948(&local_38,*(undefined1 *)(*param_1 + 0x10),0,param_2,uVar2);
  if (local_38 == 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&uStack_19,&DAT_01d24da4,&DAT_01d24cc4);
  }
  local_24 = local_2c;
  local_28 = local_30;
  if (param_4 != 4) {
                    /* WARNING: Subroutine does not return */
    FUN_013070f0(4,param_4,&DAT_01d24cd4);
  }
  iVar3 = *param_3;
  piVar1 = (int *)thunk_FUN_01be5118(0x14);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x14);
  }
  piVar1[2] = local_28;
  piVar1[3] = local_24;
  piVar1[4] = iVar3;
  iVar3 = 0;
  *piVar1 = local_38;
  piVar1[1] = local_34;
  do {
    *(undefined1 *)(param_2 + iVar3) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x20);
  return;
}

