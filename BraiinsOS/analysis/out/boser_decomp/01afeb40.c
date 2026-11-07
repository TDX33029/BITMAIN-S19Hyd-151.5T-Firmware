// FUN_01afeb40 @ 01afeb40 size=316 calls_out=2 calls_in=0
// strings: 

undefined8
FUN_01afeb40(int param_1,int param_2,uint param_3,undefined4 param_4,code *param_5,
            undefined4 param_6)

{
  byte *pbVar1;
  byte *pbVar3;
  byte *pbVar2;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int local_50;
  undefined1 auStack_4c [15];
  byte local_3d;
  byte abStack_3c [16];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01afe8f4(auStack_4c,param_4,0x10);
  local_3d = ~((byte)~(byte)(((uint)local_3d << 0x19) >> 0x18) >> 1);
  for (uVar5 = 0; uVar5 < param_3; uVar5 = uVar5 + uVar4) {
    (*param_5)(auStack_4c,abStack_3c,param_6);
    FUN_01afe8f4(&local_50,auStack_4c,4);
    local_50 = local_50 + 1;
    FUN_01afe8f4(auStack_4c,&local_50,4);
    uVar4 = param_3 - uVar5;
    if (0xf < uVar4) {
      uVar4 = 0x10;
    }
    pbVar1 = (byte *)(param_1 + uVar5);
    pbVar3 = (byte *)(param_2 + uVar5);
    pbVar6 = abStack_3c;
    do {
      pbVar2 = pbVar3 + 1;
      *pbVar1 = *pbVar6 ^ *pbVar3;
      pbVar1 = pbVar1 + 1;
      pbVar3 = pbVar2;
      pbVar6 = pbVar6 + 1;
    } while (pbVar2 != (byte *)(param_2 + uVar5) + uVar4);
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

