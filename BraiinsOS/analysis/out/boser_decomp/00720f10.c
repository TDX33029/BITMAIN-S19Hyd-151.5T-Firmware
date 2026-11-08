// FUN_00720f10 @ 00720f10 size=432 calls_out=7 calls_in=1
// strings: 

void FUN_00720f10(char *param_1,undefined4 param_2,int param_3,int *param_4,int param_5)

{
  uint uVar1;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 auStack_78 [16];
  int local_68;
  int local_64;
  undefined1 auStack_48 [3];
  undefined1 uStack_45;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  char local_38;
  undefined2 local_37;
  char local_35;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_3 + 0xf0) == 0) {
    local_80 = 0;
    local_84 = 1;
    local_88 = 0;
  }
  else {
    FUN_006643f0((uint)&local_38 | 4,*(int *)(param_3 + 0xf0),*(undefined4 *)(param_3 + 0xf4));
    FUN_01bed4e2(&uStack_45,(uint)&local_38 | 4,0xc);
    FUN_01bed4e2(auStack_78,&uStack_45,0xc);
    FUN_0160ec7c(&local_88,auStack_78);
  }
  uVar1 = param_4[8];
  if (uVar1 != 0 || param_4[9] != 0) {
    if (*(ushort *)(param_5 + 0x92) < 5) {
      uVar1 = uVar1 - 1;
      if (*(uint *)(param_5 + 0x74) <= uVar1) goto LAB_00721008;
    }
    else if (*(uint *)(param_5 + 0x74) <= uVar1) goto LAB_00721008;
    FUN_00720b20(&local_68,*(int *)(param_5 + 0x70) + uVar1 * 0x10);
    if (local_68 != 0x2e || local_64 != 0) {
      FUN_0071d020(&local_38,param_2,*(undefined1 *)(param_3 + 0xd9),
                   *(undefined4 *)(param_3 + 0x104),&local_68);
      if (local_38 != 'O') {
        param_1[3] = local_35;
        *(undefined2 *)(param_1 + 1) = local_37;
        *param_1 = local_38;
        *(undefined4 *)(param_1 + 4) = local_34;
        *(undefined4 *)(param_1 + 8) = local_30;
        *(undefined4 *)(param_1 + 0xc) = uStack_2c;
        FUN_019bb7e0(local_88,local_84);
        return;
      }
      FUN_006643f0((uint)auStack_48 | 4,local_34,local_30);
      FUN_00651ef4(&local_88,local_40,local_3c);
      if (local_44 != -0x80000000) {
        FUN_019bb7e0(local_44,local_40);
      }
    }
  }
LAB_00721008:
                    /* WARNING: Could not recover jumptable at 0x00721014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00721018 + *(int *)(&DAT_00721018 + *param_4 * 4)))();
  return;
}

