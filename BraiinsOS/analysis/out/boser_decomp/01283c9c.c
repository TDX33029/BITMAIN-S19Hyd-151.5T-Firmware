// FUN_01283c9c @ 01283c9c size=584 calls_out=8 calls_in=99
// strings: 

void FUN_01283c9c(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint local_2c;
  uint local_28;
  int local_24;
  
  puVar4 = (uint *)param_1[3];
  uVar2 = param_1[1];
  if (((uint)puVar4 & 1) == 0) {
    uVar3 = uVar2 + param_2;
    if (CARRY4(uVar2,param_2)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_00570520,0x11,&DAT_01c25b78);
    }
    DataMemoryBarrier(0xb);
    if (puVar4[4] != 1) {
      uVar6 = puVar4[3];
      uVar7 = 0;
      uVar8 = uVar6 + 9 & 0x1f;
      local_28 = 1;
      uVar2 = uVar3;
      if (uVar3 < (uint)(1 << uVar8)) {
        uVar2 = 1 << uVar8;
      }
      if (uVar6 == 0) {
        uVar2 = uVar3;
      }
      if ((int)uVar2 < 0) {
LAB_01283dd8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar7,uVar2);
      }
      local_2c = 0;
      if (uVar2 != 0) {
        uVar7 = 1;
        local_28 = FUN_01298504(uVar2,1);
        if (local_28 == 0) goto LAB_01283dd8;
        local_2c = uVar2;
      }
      local_24 = 0;
      FUN_01ac6cbc(&local_2c,*param_1,param_1[1]);
      FUN_01283c54(puVar4);
      *param_1 = local_28;
      param_1[2] = local_2c;
      param_1[3] = uVar6 << 2 | 1;
      return;
    }
    uVar1 = *puVar4;
    uVar8 = puVar4[1];
    uVar5 = *param_1 - uVar8;
    uVar6 = uVar5 + uVar3;
    if (uVar6 <= uVar1) {
      param_1[2] = uVar3;
      return;
    }
    if (uVar3 <= uVar1 && uVar2 <= uVar5) {
      FUN_01bed4e2(uVar8);
      uVar2 = *puVar4;
      *param_1 = uVar8;
      param_1[2] = uVar2;
      return;
    }
    if (uVar6 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00570520,8,&DAT_01c25b88);
    }
    uVar2 = uVar5 + uVar2;
    if (uVar6 <= uVar1 * 2) {
      uVar6 = uVar1 << 1;
    }
    puVar4[2] = uVar2;
    if (uVar1 - uVar2 < uVar6 - uVar2) {
      FUN_006520b4(puVar4,uVar2,uVar6 - uVar2,1,1);
      uVar1 = *puVar4;
      uVar8 = puVar4[1];
    }
    param_1[2] = uVar1 - uVar5;
    uVar8 = uVar8 + uVar5;
  }
  else {
    uVar8 = (uint)puVar4 >> 5;
    uVar3 = param_1[2] + ((uint)puVar4 >> 5);
    if ((uVar2 <= (uint)puVar4 >> 5) && (param_2 <= uVar3 - uVar2)) {
      uVar2 = *param_1;
      FUN_01bed4e2(uVar2 - uVar8);
      *param_1 = uVar2 - uVar8;
      param_1[2] = uVar3;
      param_1[3] = (uint)puVar4 & 0x1f;
      return;
    }
    local_24 = uVar8 + uVar2;
    local_28 = *param_1 - uVar8;
    local_2c = uVar3;
    if (param_1[2] - uVar2 < param_2) {
      FUN_006520b4(&local_2c,local_24,param_2,1,1);
    }
    param_1[2] = local_2c - uVar8;
    uVar8 = local_28 + uVar8;
  }
  *param_1 = uVar8;
  return;
}

