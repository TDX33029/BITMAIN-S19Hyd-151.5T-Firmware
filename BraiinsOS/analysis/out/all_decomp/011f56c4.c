// FUN_011f56c4 @ 011f56c4 size=568 calls_out=2 calls_in=0
// strings: Multiple

undefined4 FUN_011f56c4(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 **ppuVar3;
  undefined4 uVar4;
  byte *pbVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined *puVar9;
  undefined1 *local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  ppuVar3 = &local_40;
  pbVar5 = (byte *)((char *)*param_1 + 1);
  if (*(char *)*param_1 == '\x01') {
    puVar7 = (undefined1 *)*param_2;
    iVar8 = param_2[1];
    pcVar6 = *(code **)(iVar8 + 0xc);
    iVar2 = (*pcVar6)(puVar7,"Multiple",8);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar6)(puVar7,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_01236920(pbVar5,param_2);
      goto joined_r0x011f5740;
    }
    iVar2 = (*pcVar6)(puVar7,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = (undefined1 *)param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = puVar7;
    local_3c = iVar8;
    local_30 = (undefined1 *)&local_40;
    iVar2 = FUN_01236920(pbVar5,&local_30);
    if (iVar2 != 0) {
      return 1;
    }
  }
  else {
    puVar7 = (undefined1 *)*param_2;
    puVar9 = (undefined *)param_2[1];
    pcVar6 = *(code **)(puVar9 + 0xc);
    iVar2 = (*pcVar6)(puVar7,&DAT_0038bed0,6);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar6)(puVar7,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      bVar1 = *pbVar5;
      iVar2 = LZCOUNT((uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1)
                                       << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                    bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7) <<
                      0x18);
      iVar2 = (*pcVar6)(puVar7,(&PTR_DAT_018b2318)[iVar2],*(undefined4 *)(&DAT_004204c8 + iVar2 * 4)
                       );
      goto joined_r0x011f5740;
    }
    iVar2 = (*pcVar6)(puVar7,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    bVar1 = *pbVar5;
    iVar2 = LZCOUNT((uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) <<
                                     1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                  bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7) << 0x18)
    ;
    local_40 = (undefined1 *)CONCAT31(local_40._1_3_,1);
    local_30 = puVar7;
    local_2c = puVar9;
    local_28 = (undefined1 *)&local_40;
    iVar2 = FUN_00fb1f64(&local_30,(&PTR_DAT_018b2334)[iVar2],
                         *(undefined4 *)(&DAT_004204e4 + iVar2 * 4));
    if (iVar2 != 0) {
      return 1;
    }
    ppuVar3 = &local_30;
  }
  iVar2 = FUN_00fb1f64(ppuVar3,&DAT_00414a81,2);
joined_r0x011f5740:
  if (iVar2 == 0) {
    uVar4 = (*pcVar6)(puVar7,&DAT_00418e07,1);
    return uVar4;
  }
  return 1;
}

