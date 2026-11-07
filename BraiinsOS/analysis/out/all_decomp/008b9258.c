// FUN_008b9258 @ 008b9258 size=444 calls_out=6 calls_in=1
// strings: BUG: zero midstates | BUG: number of midstates not a power of 2BUG: Iterator not stepped; call next before selecting left rangeBUG: Iterator not stepped; call next before selecting right rangestruct VoltageRange

void FUN_008b9258(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  int local_30 [2];
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  uint local_24;
  
  if (*(char *)(param_2 + 0x12) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00345232,0x31,&DAT_01863e28);
  }
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 != 8) {
    local_28 = (undefined2)iVar2;
    local_30[1] = 8;
    local_30[0] = 6;
    local_25 = (undefined1)((uint)iVar2 >> 0x18);
    local_26 = (undefined1)((uint)iVar2 >> 0x10);
    uVar3 = FUN_008cbdec(local_30);
    *param_1 = 1;
    param_1[1] = uVar3;
    return;
  }
  uVar6 = **(uint **)(param_2 + 4);
  uVar7 = (*(uint **)(param_2 + 4))[1];
  uVar8 = (**(code **)(param_3 + 100))
                    (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                     uVar6 >> 0x18,param_3);
  if (*(char *)(param_3 + 0x60) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0034524a,0x61,&DAT_01863e38);
  }
  local_24 = *(uint *)(param_3 + 0x58);
  uVar5 = 0;
  if (local_24 != 1) {
    if (local_24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("BUG: zero midstates",0x13,&DAT_0187f8f4);
    }
    uVar4 = local_24;
    do {
      uVar5 = uVar5 + 1;
      bVar1 = 3 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar1);
    uVar5 = uVar5 & 0x1f;
  }
  local_30[0] = 1 << uVar5;
  if (local_24 != 1 << uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,&local_24,local_30,
                 "BUG: number of midstates not a power of 2BUG: Iterator not stepped, call next before selecting left rangeBUG: Iterator not stepped, call next before selecting right rangestruct VoltageRange"
                 ,0x53,&DAT_0187f904);
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faf2a4(&DAT_0186afd8);
  }
  param_1[2] = (int)((ulonglong)uVar8 >> 0x20);
  param_1[5] = ((uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) & ~(-1 << uVar5);
  *param_1 = 0;
  uVar5 = *(uint *)(param_3 + 0x50);
  param_1[4] = uVar6;
  param_1[6] = 0;
  uVar3 = FUN_018462e8((uint)uVar8 & 0xff,param_4);
  param_1[1] = uVar3;
  param_1[3] = (uVar7 >> 8 & 0xff) >> (uVar5 & 0x1f);
  return;
}

