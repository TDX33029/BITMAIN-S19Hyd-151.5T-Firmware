// FUN_006f750c @ 006f750c size=488 calls_out=3 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006f750c(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int local_ac [17];
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar1 = *(undefined4 **)(param_2 + 0x20);
  do {
    FUN_006fb748(local_ac,param_2);
    if (local_ac[0] == 0) {
LAB_006f7688:
      local_48 = (undefined1 *)0x80000007;
      goto LAB_006f7690;
    }
    FUN_006ff5dc(&local_68,local_ac,*(undefined4 *)(param_2 + 0x1c));
    if (local_68 == 1) {
      FUN_006f6e10(puVar1);
      puVar1[5] = local_50;
      puVar1[6] = local_4c;
      puVar1[7] = local_48;
      *puVar1 = local_64;
      puVar1[1] = local_60;
      puVar1[2] = local_5c;
      puVar1[3] = local_58;
      puVar1[4] = local_54;
      goto LAB_006f7688;
    }
  } while ((local_48 == (undefined1 *)0x80000007) || (local_48 == &DAT_80000008));
  *param_1 = local_58;
  param_1[1] = local_54;
  param_1[5] = local_44;
  param_1[6] = uStack_40;
  param_1[2] = local_50;
  param_1[3] = local_4c;
  param_1[7] = local_3c;
  param_1[8] = uStack_38;
  param_1[9] = uStack_34;
  param_1[10] = uStack_30;
  param_1[0xb] = uStack_2c;
LAB_006f7690:
  param_1[4] = local_48;
  return;
}

