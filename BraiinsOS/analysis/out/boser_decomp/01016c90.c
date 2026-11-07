// FUN_01016c90 @ 01016c90 size=580 calls_out=10 calls_in=4
// strings: assertion failed: cnt <= self.lenAbsentUnhealthyNotEnoughSpacefree_bytesrequired_bytesPreparationApply | buffer underflow | invalid string value: data is not UTF-8 encoded

undefined4 FUN_01016c90(char param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  undefined1 local_41;
  uint local_40 [3];
  uint local_34;
  uint *local_30;
  code *local_2c;
  uint *local_28;
  code *local_24;
  
  local_34 = CONCAT31(local_34._1_3_,param_1);
  local_41 = 2;
  if (param_1 == '\x02') {
    piVar7 = (int *)*param_3;
    FUN_00ef78d0(&local_30,*piVar7);
    if (local_30 != (uint *)0x1) {
      puVar4 = *(uint **)(*piVar7 + 4);
      if ((uint)-(int)local_24 < (uint)(local_28 <= puVar4)) {
        uVar1 = *param_2;
        if (local_28 < puVar4) {
          puVar4 = local_28;
        }
        uVar3 = 0;
        param_2[2] = 0;
        if (uVar1 < puVar4) {
          FUN_0132b898(param_2,0,puVar4,1,1);
          uVar3 = param_2[2];
          uVar1 = *param_2;
          puVar4 = (uint *)*(uint *)(*piVar7 + 4);
          if (local_28 < *(uint *)(*piVar7 + 4)) {
            puVar4 = local_28;
          }
        }
        puVar6 = local_28;
        if (uVar1 - uVar3 < puVar4) {
          FUN_0132b898(param_2,uVar3,puVar4,1,1);
        }
        while( true ) {
          uVar3 = ((int *)*piVar7)[1];
          uVar1 = uVar3;
          if (puVar6 < uVar3) {
            uVar1 = (uint)puVar6;
          }
          if (uVar1 == 0) break;
          puVar2 = *(undefined4 **)*piVar7;
          uVar1 = puVar2[1];
          if (uVar1 < uVar3) {
            uVar3 = uVar1;
          }
          if (puVar6 < uVar3) {
            uVar3 = (uint)puVar6;
          }
          FUN_01ac6cbc(param_2,*puVar2,uVar3);
          piVar5 = (int *)*piVar7;
          uVar1 = piVar5[1];
          if (uVar1 < uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("assertion failed: cnt <= self.lenAbsentUnhealthyNotEnoughSpacefree_bytesrequired_bytesPreparationApply"
                         ,0x21,&DAT_01c18f74);
          }
          local_40[0] = *(uint *)(*piVar5 + 4);
          local_34 = uVar3;
          if (local_40[0] < uVar3) {
            local_28 = local_40;
            local_30 = &local_34;
            local_24 = (code *)&LAB_01a6a304;
            local_2c = (code *)&LAB_01a6a304;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_30,&DAT_01d2bbe0);
          }
          FUN_01283ef4(*piVar5,uVar3);
          piVar5[1] = uVar1 - uVar3;
          puVar6 = (uint *)((int)puVar6 - uVar3);
        }
        FUN_012fbd94(&local_30,param_2[1],param_2[2]);
        if (local_30 != (uint *)0x1) {
          return 0;
        }
        local_2c = (code *)FUN_01aa0da0("invalid string value: data is not UTF-8 encoded",0x2f);
      }
      else {
        local_2c = (code *)FUN_01aa0da0("buffer underflow",0x10);
      }
    }
  }
  else {
    local_28 = (uint *)&local_41;
    local_24 = FUN_00ef7f4c;
    local_2c = FUN_00ef7f4c;
    local_30 = &local_34;
    FUN_01a8da38(local_40,&DAT_005bfb48,&local_30);
    local_2c = (code *)FUN_01aa428c(local_40);
  }
  param_2[2] = 0;
  return local_2c;
}

