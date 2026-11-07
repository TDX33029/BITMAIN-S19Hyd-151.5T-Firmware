// FUN_01a33d94 @ 01a33d94 size=212 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01a33d94(undefined4 *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_190 [296];
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int *local_28;
  undefined1 local_24;
  
  if ((*param_2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2b198);
  }
  uVar4 = param_2[2];
  uVar3 = param_2[3];
  uVar7 = param_2[4];
  uVar5 = param_2[5];
  local_28 = (int *)*param_1;
  do {
    iVar6 = *local_28;
    bVar2 = (bool)hasExclusiveAccess(local_28);
  } while (!bVar2);
  *local_28 = iVar6 + 1;
  if (iVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1a33e68);
    (*pcVar1)();
  }
  local_60 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
             uVar5 >> 0x18;
  local_64 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
             uVar4 >> 0x18;
  local_68 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18;
  local_5c = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
             uVar7 >> 0x18;
  FUN_01bed4e2(auStack_190,param_2,0x128);
  local_24 = 0;
  iVar6 = thunk_FUN_01be5118(0x170);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x170);
  }
  FUN_01bed4e2(iVar6,auStack_190,0x170);
  return CONCAT44(&UNK_01d2b1a8,iVar6);
}

