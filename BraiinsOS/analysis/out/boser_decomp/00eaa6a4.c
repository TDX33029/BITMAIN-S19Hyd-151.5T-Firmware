// FUN_00eaa6a4 @ 00eaa6a4 size=508 calls_out=5 calls_in=0
// strings: 

void FUN_00eaa6a4(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar4 = 0;
  if (param_5 != 0) {
    if (*(int *)(param_2 + 0x18) == 0) goto LAB_00eaa6f4;
    uVar3 = *(uint *)(param_2 + 0x20);
    while (uVar3 == 0) {
LAB_00eaa6f4:
      FUN_00d583a8(&local_64,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),param_3
                  );
      uVar1 = local_54;
      uVar3 = local_58;
      uVar4 = local_5c;
      iVar2 = local_60;
      if (local_64 == 2) {
LAB_00eaa83c:
        *(undefined1 *)param_1 = 5;
        return;
      }
      if ((local_64 & 1) == 0) {
        uVar4 = 0;
        goto LAB_00eaa854;
      }
      if (local_60 == 0) {
        local_34 = &local_40;
        local_38 = 0;
        local_40 = 0;
        local_28 = 0;
        local_3c = 1;
        local_2c = 0x60000020;
        local_30 = &DAT_01c1695c;
        iVar2 = (**(code **)(local_58 + 0x10))(local_5c,&local_34);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&local_50,&DAT_01c16984,&DAT_01d30334);
        }
        local_50 = local_40;
        uStack_4c = local_3c;
        uStack_48 = local_38;
        FUN_01af977c(&local_5c,0x28);
        FUN_01443048(uVar4,uVar3);
        if ((local_5c & 0xff) != 4) {
          if ((local_5c & 0xff) != 5) {
            *param_1 = local_5c;
            param_1[1] = local_58;
            return;
          }
          goto LAB_00eaa83c;
        }
        uVar4 = 0;
        goto LAB_00eaa854;
      }
      if (*(int *)(param_2 + 0x18) != 0) {
        (**(code **)(*(int *)(param_2 + 0x18) + 0x10))
                  (param_2 + 0x24,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
      }
      *(int *)(param_2 + 0x18) = iVar2;
      *(uint *)(param_2 + 0x1c) = uVar4;
      *(uint *)(param_2 + 0x20) = uVar3;
      *(undefined4 *)(param_2 + 0x24) = uVar1;
    }
    iVar2 = *(int *)(param_2 + 0x1c);
    uVar4 = param_5;
    if (uVar3 <= param_5) {
      uVar4 = uVar3;
    }
    FUN_01bed4e2(param_4,iVar2,uVar4);
    *(uint *)(param_2 + 0x1c) = iVar2 + uVar4;
    *(uint *)(param_2 + 0x20) = uVar3 - uVar4;
  }
LAB_00eaa854:
  param_1[1] = uVar4;
  *(undefined1 *)param_1 = 4;
  return;
}

