// FUN_01419758 @ 01419758 size=576 calls_out=9 calls_in=0
// strings: 

uint FUN_01419758(int param_1,int param_2,undefined4 param_3,int *param_4,int param_5,int *param_6)

{
  uint uVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *local_e8;
  code *local_e4;
  undefined1 auStack_e0 [180];
  uint local_2c;
  int local_28;
  
  uVar1 = FUN_0102d85c(param_2);
  if ((uVar1 & 0xff) == 0xc) {
    iVar5 = *param_4;
    uVar6 = param_4[1];
    iVar4 = param_4[2];
    if (((*(uint *)(iVar5 + 0x38) <= uVar6) ||
        (piVar2 = (int *)(*(int *)(iVar5 + 0x34) + uVar6 * 0xf8), *piVar2 == 3 && piVar2[1] == 0))
       || (piVar2[0x35] != iVar4)) {
      puVar3 = &DAT_01882560;
LAB_0141996c:
      local_e4 = FUN_0101a4ac;
      local_e8 = &local_28;
      local_2c = uVar6;
      local_28 = iVar4;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00599806,&local_e8,puVar3);
    }
    local_2c = uVar6;
    local_28 = iVar4;
    uVar1 = FUN_010202b0(piVar2 + 8,*(byte *)(param_2 + 0xac) & 1);
    if ((uVar1 & 0xff) == 0xc) {
      if (*(uint *)(param_2 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00383048,0x1f,&DAT_01882e38);
      }
      if ((*(uint *)(param_2 + 0xa8) & 1) != (uint)*(byte *)(param_5 + 0x2c)) {
        if (((*(uint *)(iVar5 + 0x38) <= uVar6) ||
            (piVar2 = (int *)(*(int *)(iVar5 + 0x34) + uVar6 * 0xf8), *piVar2 == 3 && piVar2[1] == 0
            )) || (piVar2[0x35] != iVar4)) {
          puVar3 = &DAT_01882550;
          goto LAB_0141996c;
        }
        local_2c = uVar6;
        local_28 = iVar4;
        if (*(char *)((int)piVar2 + 0xed) == '\0') {
          FUN_0101c674(param_1 + 8,param_4);
          FUN_016dd1aa(auStack_e0,param_2,0xb0);
          local_e8 = (int *)CONCAT31(local_e8._1_3_,1);
          FUN_0140fa50(param_1 + 8,&local_e8,param_3,param_4,param_6);
          iVar4 = *param_6;
          *param_6 = 0;
          if (iVar4 == 0) {
            return 0xc;
          }
          (**(code **)(iVar4 + 4))(param_6[1]);
          return 0xc;
        }
      }
      FUN_016dd1aa(auStack_e0,param_2,0xb0);
      local_e8 = (int *)CONCAT31(local_e8._1_3_,1);
      FUN_0140fa50(param_1 + 8,&local_e8,param_3,param_4,param_6);
      return 0xc;
    }
  }
  FUN_0141841c(param_2);
  FUN_01404298(param_2 + 0x40);
  return uVar1;
}

