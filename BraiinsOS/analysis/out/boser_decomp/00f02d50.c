// FUN_00f02d50 @ 00f02d50 size=512 calls_out=8 calls_in=0
// strings: buffer underflow

undefined4 FUN_00f02d50(char param_1,uint *param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  uint local_58;
  int iStack_54;
  uint local_50;
  undefined4 uStack_4c;
  uint local_48;
  int local_44;
  uint local_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  code *local_2c;
  uint *local_28;
  code *local_24;
  
  local_58 = CONCAT31(local_58._1_3_,param_1);
  local_34 = CONCAT31(local_34._1_3_,2);
  if (param_1 == '\x02') {
    FUN_00ef78d0(&local_30,*param_3);
    if (local_30 == (uint *)0x1) {
      pcVar5 = local_2c;
    }
    else {
      puVar1 = (undefined4 *)*param_3;
      if ((uint)(local_28 <= (uint)puVar1[1]) <= (uint)-(int)local_24) {
        uVar3 = FUN_01aa0da0("buffer underflow",0x10);
        return uVar3;
      }
      puVar1[1] = puVar1[1] - (int)local_28;
      FUN_01284280(&local_58,*puVar1);
      uVar2 = *param_2;
      uVar4 = 0;
      param_2[2] = 0;
      if (uVar2 < local_50) {
        FUN_0132b898(param_2,0,local_50,1,1);
        uVar2 = *param_2;
        uVar4 = param_2[2];
      }
      local_48 = local_58;
      local_44 = iStack_54;
      local_40 = local_50;
      uStack_3c = uStack_4c;
      if (uVar2 - uVar4 < local_50) {
        FUN_0132b898(param_2,uVar4,local_50,1,1);
      }
      for (; uVar2 = local_40, local_40 != 0; local_40 = local_40 - uVar2) {
        FUN_01ac6cbc(param_2,local_44,local_40);
        local_38 = uVar2;
        if (local_40 < uVar2) {
          local_34 = local_40;
          local_28 = &local_34;
          local_30 = &local_38;
          local_24 = (code *)&LAB_01a6a304;
          local_2c = (code *)&LAB_01a6a304;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_30,&DAT_01d2e534);
        }
        local_44 = local_44 + uVar2;
      }
      pcVar5 = (code *)0x0;
      (**(code **)(local_48 + 0x10))(&uStack_3c,local_44,0);
    }
  }
  else {
    local_28 = &local_34;
    local_24 = FUN_00ef7f4c;
    local_2c = FUN_00ef7f4c;
    local_30 = &local_58;
    FUN_01a8da38(&local_48,&DAT_005bfb48,&local_30);
    pcVar5 = (code *)FUN_01aa428c(&local_48);
  }
  return pcVar5;
}

