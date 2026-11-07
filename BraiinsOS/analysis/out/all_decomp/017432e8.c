// FUN_017432e8 @ 017432e8 size=996 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_017432e8(int param_1,uint *param_2,uint param_3)

{
  code *pcVar1;
  code *pcVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x38) != 0 || *(int *)(param_1 + 0x3c) != 0) {
    return 0;
  }
  iVar4 = param_3 + *(uint *)(param_1 + 0x30);
  uVar6 = *(int *)(param_1 + 0x34) + (uint)CARRY4(param_3,*(uint *)(param_1 + 0x30));
  if (0x1fffffff < uVar6 && (uint)(iVar4 == 0) <= 0x20000000 - uVar6) {
    return 0;
  }
  pcVar1 = *(code **)(param_1 + 0x150);
  *(int *)(param_1 + 0x30) = iVar4;
  uVar5 = *(uint *)(param_1 + 0x164);
  pcVar2 = *(code **)(param_1 + 0x154);
  *(uint *)(param_1 + 0x34) = uVar6;
  if (uVar5 != 0) {
    puVar3 = param_2;
    if (param_3 == 0) goto LAB_01743498;
    do {
      iVar4 = param_1 + uVar5;
      uVar5 = uVar5 + 1 & 0xf;
      param_2 = (uint *)((int)puVar3 + 1);
      param_3 = param_3 - 1;
      *(byte *)(iVar4 + 0x40) = *(byte *)(iVar4 + 0x40) ^ (byte)*puVar3;
      puVar3 = param_2;
    } while (param_3 != 0 && uVar5 != 0);
    if (uVar5 != 0) goto LAB_01743498;
    (*pcVar1)(param_1 + 0x40,param_1 + 0x50);
  }
  uVar6 = param_3 & 0xfffffff0;
  if (uVar6 == 0) {
    uVar5 = param_3;
    if (param_3 == 0) goto LAB_01743494;
  }
  else {
    (*pcVar2)(param_1 + 0x40,param_1 + 0x50);
    uVar5 = param_3 - uVar6;
    if (uVar5 == 0) {
LAB_01743494:
      uVar5 = 0;
      goto LAB_01743498;
    }
    param_2 = (uint *)((int)param_2 + uVar6);
    if (0x10 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c24();
    }
  }
  if (uVar5 - 1 < 4) {
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) ^ (byte)*param_2;
    if ((uVar5 == 1) ||
       (*(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) ^ *(byte *)((int)param_2 + 1),
       uVar5 == 2)) goto LAB_01743498;
  }
  else {
    if (2 < (uint)((param_1 + 0x3f) - (int)param_2)) {
      uVar6 = uVar5 >> 2;
      *(uint *)(param_1 + 0x40) = *param_2 ^ *(uint *)(param_1 + 0x40);
      if (uVar6 == 1) {
        uVar6 = 4;
      }
      else {
        *(uint *)(param_1 + 0x44) = param_2[1] ^ *(uint *)(param_1 + 0x44);
        if ((uVar6 != 2) &&
           (*(uint *)(param_1 + 0x48) = param_2[2] ^ *(uint *)(param_1 + 0x48), uVar6 == 4)) {
          *(uint *)(param_1 + 0x4c) = param_2[3] ^ *(uint *)(param_1 + 0x4c);
          goto LAB_01743498;
        }
        uVar6 = uVar5 & 0xfffffffc;
        if ((uVar5 & 3) == 0) goto LAB_01743498;
      }
      uVar7 = uVar6 + 1;
      *(byte *)(param_1 + uVar6 + 0x40) =
           *(byte *)((int)param_2 + uVar6) ^ *(byte *)(param_1 + uVar6 + 0x40);
      if (uVar7 < uVar5) {
        uVar6 = uVar6 + 2;
        *(byte *)(param_1 + uVar7 + 0x40) =
             *(byte *)((int)param_2 + uVar7) ^ *(byte *)(param_1 + uVar7 + 0x40);
        if (uVar6 < uVar5) {
          *(byte *)(param_1 + uVar6 + 0x40) =
               *(byte *)((int)param_2 + uVar6) ^ *(byte *)(param_1 + uVar6 + 0x40);
        }
      }
      goto LAB_01743498;
    }
    *(byte *)(param_1 + 0x40) = (byte)*param_2 ^ *(byte *)(param_1 + 0x40);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) ^ *(byte *)((int)param_2 + 1);
  }
  *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) ^ *(byte *)((int)param_2 + 2);
  if (((((uVar5 != 3) &&
        (*(byte *)(param_1 + 0x43) = *(byte *)(param_1 + 0x43) ^ *(byte *)((int)param_2 + 3),
        uVar5 != 4)) &&
       (*(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) ^ (byte)param_2[1], uVar5 != 5)) &&
      (((*(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) ^ *(byte *)((int)param_2 + 5),
        uVar5 != 6 &&
        (*(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) ^ *(byte *)((int)param_2 + 6),
        uVar5 != 7)) &&
       ((*(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) ^ *(byte *)((int)param_2 + 7),
        uVar5 != 8 &&
        ((*(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) ^ (byte)param_2[2], uVar5 != 9 &&
         (*(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) ^ *(byte *)((int)param_2 + 9),
         uVar5 != 10)))))))) &&
     ((*(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) ^ *(byte *)((int)param_2 + 10),
      uVar5 != 0xb &&
      ((((*(byte *)(param_1 + 0x4b) = *(byte *)(param_1 + 0x4b) ^ *(byte *)((int)param_2 + 0xb),
         uVar5 != 0xc &&
         (*(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) ^ (byte)param_2[3], uVar5 != 0xd))
        && (*(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 0x4d) ^ *(byte *)((int)param_2 + 0xd),
           uVar5 != 0xe)) &&
       (*(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) ^ *(byte *)((int)param_2 + 0xe),
       uVar5 == 0x10)))))) {
    *(byte *)(param_1 + 0x4f) = *(byte *)((int)param_2 + 0xf) ^ *(byte *)(param_1 + 0x4f);
  }
LAB_01743498:
  *(uint *)(param_1 + 0x164) = uVar5;
  return 1;
}

