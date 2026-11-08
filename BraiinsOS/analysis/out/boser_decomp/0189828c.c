// FUN_0189828c @ 0189828c size=648 calls_out=5 calls_in=3
// strings: VersionNotSupported | InvalidEncoding | InvalidEncoding

void FUN_0189828c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_1f4;
  int local_1f0;
  int local_1ec;
  undefined1 auStack_1e8 [116];
  undefined8 local_174;
  int local_16c;
  int local_168;
  char *local_164;
  undefined4 local_160;
  undefined1 auStack_15c [116];
  int local_e8;
  char *local_e4;
  undefined4 local_e0;
  undefined1 auStack_dc [120];
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  
  local_1ec = 0;
  local_1f4 = param_2;
  local_1f0 = param_3;
  local_174 = FUN_01898838(&local_1f4,0x30);
  if ((int)local_174 != 0) {
    local_16c = 0;
    uVar3 = FUN_01899080(&local_174);
    uVar1 = 0xf;
    pcVar2 = "InvalidEncoding";
    if (((char *)uVar3 == (char *)0x0) || ((int)((ulonglong)uVar3 >> 0x20) != 1)) goto LAB_018984e0;
    if (*(char *)uVar3 != '\0') {
      uVar1 = 0x13;
      pcVar2 = "VersionNotSupported";
      goto LAB_018984e0;
    }
    uVar3 = FUN_01899080(&local_174);
    if ((int)uVar3 == 0) goto LAB_018984e0;
    uVar4 = FUN_01899080(&local_174);
    if ((int)uVar4 == 0) goto LAB_018984e0;
    uVar5 = FUN_01899080(&local_174);
    if ((int)uVar5 == 0) goto LAB_018984e0;
    uVar6 = FUN_01899080(&local_174);
    if ((int)uVar6 == 0) goto LAB_018984e0;
    uVar7 = FUN_01899080(&local_174);
    if ((int)uVar7 == 0) goto LAB_018984e0;
    uVar8 = FUN_01899080(&local_174);
    if ((int)uVar8 == 0) goto LAB_018984e0;
    local_34 = FUN_01899080(&local_174);
    if ((int)local_34 == 0) goto LAB_018984e0;
    local_2c = FUN_01899080(&local_174);
    if ((int)local_2c == 0) goto LAB_018984e0;
    local_64 = uVar3;
    uStack_5c = uVar4;
    local_54 = uVar5;
    local_4c = uVar6;
    local_44 = uVar7;
    local_3c = uVar8;
    FUN_01892120(&local_e8,&local_64);
    uVar1 = local_e0;
    pcVar2 = local_e4;
    if (local_e8 == 0) goto LAB_018984e0;
    FUN_01bed4e2(auStack_15c,auStack_dc,0x74);
    local_160 = local_e0;
    local_164 = local_e4;
    local_168 = local_e8;
    if (local_16c == local_174._4_4_) {
      FUN_01bed4e2(auStack_1e8,auStack_15c,0x74);
      FUN_01bed4e2(auStack_dc,auStack_1e8,0x74);
      if (local_1ec == local_1f0) {
        FUN_01bed4e2(param_1,&local_e8,0x80);
        return;
      }
      *param_1 = 0;
      param_1[1] = "InvalidEncoding";
      param_1[2] = 0xf;
      FUN_018bc9a8(&local_e8);
      return;
    }
    FUN_018bc9a8(&local_168);
  }
  uVar1 = 0xf;
  pcVar2 = "InvalidEncoding";
LAB_018984e0:
  *param_1 = 0;
  param_1[1] = pcVar2;
  param_1[2] = uVar1;
  return;
}

