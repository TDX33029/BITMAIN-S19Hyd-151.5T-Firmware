// FUN_01894ae0 @ 01894ae0 size=372 calls_out=5 calls_in=2
// strings: 

void FUN_01894ae0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte local_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar5 = param_2[0x46];
  uVar6 = param_2[0x47];
  uVar1 = param_2[0x44];
  uVar4 = param_2[0x45];
  local_24 = CONCAT13((char)uVar5,
                      CONCAT12((char)((uint)uVar5 >> 8),
                               CONCAT11((char)((uint)uVar5 >> 0x10),(char)((uint)uVar5 >> 0x18))));
  local_30._0_2_ = CONCAT11((char)((uint)uVar4 >> 0x10),(char)((uint)uVar4 >> 0x18));
  local_30 = CONCAT22(CONCAT11((char)uVar4,(char)((uint)uVar4 >> 8)),(undefined2)local_30);
  local_28 = CONCAT31(CONCAT21(CONCAT11((char)uVar6,(char)((uint)uVar6 >> 8)),
                               (char)((uint)uVar6 >> 0x10)),(char)((uint)uVar6 >> 0x18));
  local_2c = CONCAT13((char)uVar1,
                      CONCAT12((char)((uint)uVar1 >> 8),
                               CONCAT11((char)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x18))));
  FUN_01894c58(param_2,&local_30);
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  local_30 = param_3[1];
  local_2c = param_3[2];
  local_28 = param_3[3];
  local_24 = param_3[4];
  uVar2 = 1;
  if ((DAT_01d53480 & 4) == 0) {
    uVar2 = DAT_01d53480 & 1 ^ 3;
  }
  if (uVar2 == 1) {
    FUN_01bd8f20(&local_30,local_40,*param_3,DAT_01d53480 & 1,uVar1,uVar4,uVar5,uVar6);
  }
  else if (uVar2 == 2) {
    FUN_01bda190(&local_30,local_40);
  }
  else {
    FUN_01bcf57c(&local_30,local_40);
  }
  local_30 = uVar1;
  local_2c = uVar4;
  local_28 = uVar5;
  local_24 = uVar6;
  iVar3 = 0;
  do {
    *(byte *)((int)&local_30 + iVar3) = *(byte *)((int)&local_30 + iVar3) ^ local_40[iVar3];
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  FUN_01bed4e2(param_1,&local_30,0x10);
  return;
}

