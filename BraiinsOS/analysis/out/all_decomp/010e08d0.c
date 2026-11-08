// FUN_010e08d0 @ 010e08d0 size=408 calls_out=4 calls_in=2
// strings: 

void FUN_010e08d0(longlong *param_1,undefined4 param_2,uint param_3,uint param_4,undefined1 *param_5
                 )

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint extraout_r2;
  int extraout_r3;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint local_60;
  uint uStack_5c;
  undefined1 *puStack_58;
  uint local_50;
  uint local_4c;
  undefined1 *local_48;
  uint local_40 [2];
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  
  lVar1 = CONCAT44(param_4,param_3);
  puStack_58 = param_5;
  DataMemoryBarrier(0xb);
  local_60 = param_3;
  uStack_5c = param_4;
  if (DAT_018d8640 != 2) {
    FUN_010e0dcc();
  }
  puVar6 = DAT_018d8638;
  uVar5 = DAT_018d8634;
  lVar4 = CONCAT44(DAT_018d8634,DAT_018d8630);
  local_48 = DAT_018d8638;
  local_4c = DAT_018d8634;
  local_50 = DAT_018d8630;
  bVar2 = (int)(param_4 - (DAT_018d8634 + (param_3 < DAT_018d8630))) < 0 ==
          (SBORROW4(param_4,DAT_018d8634) !=
          SBORROW4(param_4 - DAT_018d8634,(uint)(param_3 < DAT_018d8630)));
  if (param_3 == DAT_018d8630 && param_4 == DAT_018d8634) {
    bVar2 = DAT_018d8638 <= param_5;
  }
  if (bVar2) {
    FUN_015f3c24(local_40,&local_60,&local_50);
    lVar1 = (ulonglong)local_38 * 1000000000 + CONCAT44(iStack_34 * 1000000000,uStack_30) + 99999999
    ;
    if ((local_40[0] & 1) != 0) {
      lVar1 = 99999999;
    }
    iVar7 = (int)((ulonglong)lVar1 >> 0x20);
    uVar3 = (uint)lVar1;
    FUN_01846088(uVar3,iVar7,100000000,0);
    lVar9 = FUN_01846088(uVar3 - extraout_r2,iVar7 - (extraout_r3 + (uint)(uVar3 < extraout_r2)),
                         &DAT_3b9aca00,0);
    lVar1 = lVar9 + lVar4;
    uVar8 = (uint)((ulonglong)lVar1 >> 0x20);
    if (-1 < (int)((uVar5 ^ uVar8) & ~(uVar5 ^ (uint)((ulonglong)lVar9 >> 0x20)))) {
      param_5 = puVar6 + (uVar3 - extraout_r2) + (int)lVar9 * -1000000000;
      if (param_5 < &DAT_3b9aca00) goto LAB_010e0a2c;
      if (-1 < (int)((uVar8 ^ (uint)((ulonglong)(lVar1 + 1) >> 0x20)) & ~uVar8)) {
        *param_1 = lVar1 + 1;
        *(undefined1 **)(param_1 + 1) = param_5 + -1000000000;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
LAB_010e0a2c:
  *param_1 = lVar1;
  *(undefined1 **)(param_1 + 1) = param_5;
  return;
}

