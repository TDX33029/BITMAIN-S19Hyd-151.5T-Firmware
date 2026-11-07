// FUN_0136c914 @ 0136c914 size=284 calls_out=2 calls_in=1
// strings: 

void FUN_0136c914(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint local_30;
  uint local_2c;
  uint *local_28;
  code *local_24;
  
  local_28 = &local_30;
  uVar2 = *(uint *)(param_1 + 0x58);
  local_30 = param_2;
  local_2c = param_3;
  if ((uVar2 <= param_2) ||
     (uVar3 = ~(-1 << (*(uint *)(param_1 + 0x15c) & 0x1f)), (param_2 & uVar3) != 0)) {
    local_24 = FUN_013bc8e0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0057bafe,&local_28,&DAT_01892700);
  }
  if ((uVar2 <= param_3) || ((param_3 & uVar3) != 0)) {
    local_28 = &local_2c;
    local_24 = FUN_013bc8e0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0056ac57,&local_28,&DAT_01892710);
  }
  bVar1 = *(byte *)(param_1 + 0x15b);
  iVar9 = uVar2 - param_2;
  iVar5 = *(int *)(param_1 + 0x54) + param_2 * 4;
  iVar6 = *(int *)(param_1 + 0x54) + param_3 * 4;
  iVar4 = 0;
  if (uVar2 < param_2) {
    iVar9 = 0;
  }
  while( true ) {
    if (iVar9 == iVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(param_2 + iVar4,uVar2,&DAT_01892720);
    }
    if (uVar2 - param_3 == iVar4) break;
    iVar8 = iVar4 + 1;
    uVar7 = *(undefined4 *)(iVar5 + iVar4 * 4);
    *(undefined4 *)(iVar5 + iVar4 * 4) = *(undefined4 *)(iVar6 + iVar4 * 4);
    *(undefined4 *)(iVar6 + iVar4 * 4) = uVar7;
    iVar4 = iVar8;
    if (bVar1 + 2 == iVar8) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(param_3 + iVar4,uVar2,&DAT_01892720);
}

