// FUN_01b866c8 @ 01b866c8 size=988 calls_out=1 calls_in=1
// strings: 

uint * FUN_01b866c8(uint *param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  if (param_2 == (uint *)0x0) {
    return param_1;
  }
  uVar4 = *param_1;
  *param_1 = uVar4 + param_3;
  uVar5 = param_1[0x12];
  param_1[1] = param_1[1] + (uint)CARRY4(uVar4,param_3);
  if (param_3 + uVar5 < 0x20) {
    FUN_01b8668c((int)param_1 + uVar5 + 0x28);
    param_1[0x12] = param_1[0x12] + param_3;
    return (uint *)0x0;
  }
  puVar6 = (uint *)((int)param_2 + param_3);
  if (uVar5 != 0) {
    FUN_01b8668c((int)param_1 + uVar5 + 0x28,param_2,0x20 - uVar5,uVar5,param_4);
    lVar1 = (ulonglong)param_1[10] * 0x27d4eb4f;
    uVar4 = (uint)lVar1;
    uVar5 = uVar4 + param_1[2];
    uVar4 = param_1[0xb] * 0x27d4eb4f + param_1[10] * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20)
            + param_1[3] + (uint)CARRY4(uVar4,param_1[2]);
    uVar7 = uVar5 * -0x80000000 + (uVar4 >> 1);
    lVar1 = (ulonglong)uVar7 * 0x85ebca87;
    param_1[2] = (uint)lVar1;
    param_1[3] = (uVar4 * -0x80000000 + (uVar5 >> 1)) * -0x7a143579 + uVar7 * -0x61c8864f +
                 (int)((ulonglong)lVar1 >> 0x20);
    lVar1 = (ulonglong)param_1[0xc] * 0x27d4eb4f;
    uVar4 = (uint)lVar1;
    uVar7 = uVar4 + param_1[4];
    uVar5 = param_1[0xd] * 0x27d4eb4f + param_1[0xc] * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20)
            + param_1[5] + (uint)CARRY4(uVar4,param_1[4]);
    uVar4 = uVar7 * -0x80000000 + (uVar5 >> 1);
    lVar1 = (ulonglong)uVar4 * 0x85ebca87;
    param_1[4] = (uint)lVar1;
    param_1[5] = (uVar5 * -0x80000000 + (uVar7 >> 1)) * -0x7a143579 + uVar4 * -0x61c8864f +
                 (int)((ulonglong)lVar1 >> 0x20);
    lVar1 = (ulonglong)param_1[0xe] * 0x27d4eb4f;
    uVar4 = (uint)lVar1;
    uVar7 = uVar4 + param_1[6];
    uVar5 = param_1[0xf] * 0x27d4eb4f + param_1[0xe] * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20)
            + param_1[7] + (uint)CARRY4(uVar4,param_1[6]);
    uVar4 = uVar7 * -0x80000000 + (uVar5 >> 1);
    lVar1 = (ulonglong)uVar4 * 0x85ebca87;
    param_1[6] = (uint)lVar1;
    param_1[7] = (uVar5 * -0x80000000 + (uVar7 >> 1)) * -0x7a143579 + uVar4 * -0x61c8864f +
                 (int)((ulonglong)lVar1 >> 0x20);
    lVar1 = (ulonglong)param_1[0x10] * 0x27d4eb4f;
    uVar4 = (uint)lVar1;
    uVar7 = uVar4 + param_1[8];
    uVar5 = param_1[0x11] * 0x27d4eb4f + param_1[0x10] * -0x3d4d51c3 +
            (int)((ulonglong)lVar1 >> 0x20) + param_1[9] + (uint)CARRY4(uVar4,param_1[8]);
    uVar4 = uVar7 * -0x80000000 + (uVar5 >> 1);
    lVar1 = (ulonglong)uVar4 * 0x85ebca87;
    param_1[8] = (uint)lVar1;
    param_2 = (uint *)((int)param_2 + (0x20 - param_1[0x12]));
    param_1[9] = (uVar5 * -0x80000000 + (uVar7 >> 1)) * -0x7a143579 + uVar4 * -0x61c8864f +
                 (int)((ulonglong)lVar1 >> 0x20);
    param_1[0x12] = 0;
  }
  if (param_2 + 8 <= puVar6) {
    puVar2 = param_2;
    do {
      puVar3 = puVar2 + 8;
      lVar1 = (ulonglong)*puVar2 * 0x27d4eb4f;
      uVar4 = (uint)lVar1;
      uVar5 = uVar4 + param_1[2];
      uVar4 = puVar2[1] * 0x27d4eb4f + *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) +
              param_1[3] + (uint)CARRY4(uVar4,param_1[2]);
      uVar7 = uVar5 * -0x80000000 + (uVar4 >> 1);
      lVar1 = (ulonglong)uVar7 * 0x85ebca87;
      param_1[2] = (uint)lVar1;
      param_1[3] = (uVar4 * -0x80000000 + (uVar5 >> 1)) * -0x7a143579 + uVar7 * -0x61c8864f +
                   (int)((ulonglong)lVar1 >> 0x20);
      lVar1 = (ulonglong)puVar2[2] * 0x27d4eb4f;
      uVar4 = (uint)lVar1;
      uVar5 = uVar4 + param_1[4];
      uVar4 = puVar2[3] * 0x27d4eb4f + puVar2[2] * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) +
              param_1[5] + (uint)CARRY4(uVar4,param_1[4]);
      uVar7 = uVar5 * -0x80000000 + (uVar4 >> 1);
      lVar1 = (ulonglong)uVar7 * 0x85ebca87;
      param_1[4] = (uint)lVar1;
      param_1[5] = (uVar4 * -0x80000000 + (uVar5 >> 1)) * -0x7a143579 + uVar7 * -0x61c8864f +
                   (int)((ulonglong)lVar1 >> 0x20);
      lVar1 = (ulonglong)puVar2[4] * 0x27d4eb4f;
      uVar4 = (uint)lVar1;
      uVar5 = uVar4 + param_1[6];
      uVar4 = puVar2[5] * 0x27d4eb4f + puVar2[4] * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) +
              param_1[7] + (uint)CARRY4(uVar4,param_1[6]);
      uVar7 = uVar5 * -0x80000000 + (uVar4 >> 1);
      lVar1 = (ulonglong)uVar7 * 0x85ebca87;
      param_1[6] = (uint)lVar1;
      param_1[7] = (uVar4 * -0x80000000 + (uVar5 >> 1)) * -0x7a143579 + uVar7 * -0x61c8864f +
                   (int)((ulonglong)lVar1 >> 0x20);
      lVar1 = (ulonglong)puVar2[6] * 0x27d4eb4f;
      uVar4 = (uint)lVar1;
      uVar5 = uVar4 + param_1[8];
      uVar4 = puVar2[7] * 0x27d4eb4f + puVar2[6] * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) +
              param_1[9] + (uint)CARRY4(uVar4,param_1[8]);
      uVar7 = uVar5 * -0x80000000 + (uVar4 >> 1);
      lVar1 = (ulonglong)uVar7 * 0x85ebca87;
      param_1[8] = (uint)lVar1;
      param_1[9] = (uVar4 * -0x80000000 + (uVar5 >> 1)) * -0x7a143579 + uVar7 * -0x61c8864f +
                   (int)((ulonglong)lVar1 >> 0x20);
      puVar2 = puVar3;
    } while (puVar3 <= puVar6 + -8);
    param_2 = (uint *)((int)param_2 + ((int)puVar6 + (-0x20 - (int)param_2) & 0xffffffe0U) + 0x20);
  }
  if (param_2 < puVar6) {
    FUN_01b8668c(param_1 + 10,param_2,(int)puVar6 - (int)param_2,0,param_4);
    param_1[0x12] = (int)puVar6 - (int)param_2;
    return (uint *)0x0;
  }
  return (uint *)0x0;
}

