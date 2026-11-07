// FUN_01429a28 @ 01429a28 size=220 calls_out=2 calls_in=9
// strings: 

undefined4 FUN_01429a28(int param_1,int param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 local_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  int local_28;
  undefined2 local_24;
  
  iVar2 = 0;
LAB_01429a40:
  if (param_2 == iVar2) {
    local_24 = 1;
    local_30 = 1;
    local_2c = 0;
    local_34 = 0x2c;
    uStack_3c = 0;
    local_48 = 0x2c;
    iStack_44 = param_1;
    iStack_40 = param_2;
    local_38 = param_2;
    local_28 = param_2;
    while (iVar2 = FUN_014379b8(&local_48), iVar2 != 0) {
      uVar6 = FUN_013245a0();
      if ((int)((ulonglong)uVar6 >> 0x20) == param_4) {
        pbVar1 = (byte *)uVar6;
        iVar2 = param_4;
        pbVar3 = param_3;
        do {
          if (iVar2 == 0) {
            return 1;
          }
          uVar4 = (uint)*pbVar3;
          iVar2 = iVar2 + -1;
          uVar5 = (uint)*pbVar1;
          if (uVar4 - 0x41 < 0x1a) {
            uVar4 = uVar4 | 0x20;
          }
          if (uVar5 - 0x41 < 0x1a) {
            uVar5 = uVar5 | 0x20;
          }
          pbVar1 = pbVar1 + 1;
          pbVar3 = pbVar3 + 1;
        } while (uVar5 == uVar4);
      }
    }
  }
  else {
    pbVar1 = (byte *)(param_1 + iVar2);
    iVar2 = iVar2 + 1;
    if ((*pbVar1 == 9) || (*pbVar1 - 0x20 < 0x5f)) goto LAB_01429a40;
  }
  return 0;
}

