// FUN_00a2f07c @ 00a2f07c size=264 calls_out=2 calls_in=0
// strings: 

void FUN_00a2f07c(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_ec [12];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined1 auStack_c4 [12];
  undefined1 local_b8 [72];
  uint local_70 [5];
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_016716cc(auStack_ec);
  iVar2 = *param_2;
  if ((char)param_2[0x1c] != '\0') {
    FUN_016716cc(local_b8,param_2);
    if (iVar2 == 2) {
      iVar1 = 0x10;
    }
    else if ((iVar2 != 1) || (iVar1 = 8, 1 < (uint)param_2[0x17])) goto LAB_00a2f11c;
    FUN_0168d3ac(local_70,*(undefined4 *)((int)param_2 + iVar1 + 0x14),
                 *(undefined4 *)((int)param_2 + iVar1 + 0x18),&DAT_0186c498,1);
    if (local_70[0] != 2) {
      local_e0 = local_5c;
      uStack_dc = uStack_58;
      uStack_d8 = uStack_54;
      local_d4 = local_50;
      uStack_d0 = uStack_4c;
      uStack_cc = uStack_48;
      uStack_c8 = uStack_44;
                    /* WARNING: Could not recover jumptable at 0x00a2f47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00a2f480 + *(int *)(&DAT_00a2f480 + iVar2 * 4)))();
      return;
    }
  }
LAB_00a2f11c:
  FUN_016716cc(auStack_c4,param_2);
                    /* WARNING: Could not recover jumptable at 0x00a2f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00a2f134 + *(int *)(&LAB_00a2f134 + iVar2 * 4)))();
  return;
}

