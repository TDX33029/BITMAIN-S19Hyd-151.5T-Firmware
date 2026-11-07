// FUN_00a3dbf0 @ 00a3dbf0 size=692 calls_out=8 calls_in=0
// strings: 

void FUN_00a3dbf0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_310 [72];
  int local_2c8 [28];
  int *local_258;
  int *local_254;
  int local_250;
  int *local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined1 auStack_238 [12];
  uint local_22c;
  int local_1f0 [29];
  uint local_17c [3];
  undefined1 auStack_170 [72];
  undefined1 auStack_128 [72];
  int local_e0;
  undefined1 local_dc;
  undefined1 auStack_db [67];
  undefined1 auStack_98 [116];
  
  iVar1 = *(int *)(param_2 + 0x20);
  iVar5 = *(int *)(param_2 + 0x10);
  piVar6 = *(int **)(param_2 + 0x14);
  iVar4 = *(int *)(param_2 + 0x18);
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_016d3fb4(*(int *)(param_2 + 0x1c) - iVar2);
  }
  local_2c8[0] = 4;
  local_248 = *(undefined4 *)(param_2 + 0x30);
  uStack_244 = *(undefined4 *)(param_2 + 0x34);
  uStack_240 = *(undefined4 *)(param_2 + 0x38);
  local_24c = piVar6 + iVar4 * 0x30;
  local_258 = piVar6;
  local_250 = iVar5;
  if (iVar4 == 0) {
    local_254 = piVar6;
  }
  else {
    piVar7 = piVar6;
    do {
      local_254 = piVar7 + 0x30;
      iVar1 = *piVar7;
      piVar6 = local_24c;
      if (iVar1 == 4) break;
      FUN_016dd1aa(auStack_238,piVar7 + 0x1c,0x48);
      FUN_016dd1aa((uint)local_1f0 | 4,piVar7 + 1,0x6c);
      uVar3 = 0;
      if (local_22c != 0x80000003) {
        uVar3 = (uint)(0x80000001 < local_22c);
      }
      local_1f0[0] = iVar1;
      FUN_01676758(auStack_128,auStack_238);
      local_17c[0] = uVar3;
      FUN_016dd1aa(auStack_170,auStack_128,0x48);
      FUN_00a33a48(local_17c);
      FUN_016dd1aa(&local_e0,auStack_238,0x48);
      FUN_016dd1aa(auStack_98,local_1f0,0x70);
      if (local_2c8[0] != 4) {
        FUN_00f4b664(auStack_310);
        FUN_00a3c980(local_2c8);
      }
      FUN_016dd1aa(auStack_310,&local_e0,0xb8);
      FUN_00a3cdd8(&local_e0,auStack_310);
      if (local_e0 != 2) {
        FUN_016dd1aa(local_1f0,auStack_db,0x2b);
        *(undefined1 *)(param_1 + 1) = local_dc;
        *param_1 = local_e0;
        FUN_016dd1aa((int)param_1 + 5,local_1f0,0x2b);
        iVar1 = ((uint)((int)local_24c - (int)local_254) >> 6) * -0x55555555 + 1;
        piVar6 = local_254;
        while (iVar1 = iVar1 + -1, iVar1 != 0) {
          FUN_00a85df8(piVar6);
          piVar6 = piVar6 + 0x30;
        }
        goto LAB_00a3de6c;
      }
      piVar6 = local_24c;
      piVar7 = local_254;
    } while (local_254 != local_24c);
  }
  *param_1 = 2;
  iVar1 = ((uint)((int)piVar6 - (int)local_254) >> 6) * -0x55555555 + 1;
  piVar6 = local_254;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    FUN_00a85df8(piVar6);
    piVar6 = piVar6 + 0x30;
  }
LAB_00a3de6c:
  if (local_250 != 0) {
    thunk_FUN_016d3fb4(local_258);
  }
  if (local_2c8[0] != 4) {
    FUN_00f4b664(auStack_310);
    FUN_00a3c980(local_2c8);
  }
  return;
}

