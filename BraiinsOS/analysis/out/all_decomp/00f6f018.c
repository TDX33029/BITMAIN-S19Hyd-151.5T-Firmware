// FUN_00f6f018 @ 00f6f018 size=412 calls_out=5 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f6f018(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int iStack_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  uint local_38;
  code *pcStack_34;
  uint local_30;
  uint uStack_2c;
  int iStack_28;
  
  local_58 = param_5;
  local_44 = 0;
  local_48 = 0;
  local_40 = 0;
  local_60 = param_3;
  uStack_5c = param_4;
  FUN_015f3c24(&local_38,&local_60,&local_48);
  uVar5 = local_30;
  iVar7 = iStack_28;
  if ((local_38 & 1) != 0) {
    if (iStack_28 == 0) {
      uVar5 = -local_30;
      iVar7 = 0;
      uStack_2c = -(uStack_2c + (local_30 != 0));
    }
    else {
      uVar5 = ~local_30;
      iVar7 = (int)&DAT_3b9aca00 - iStack_28;
      uStack_2c = ~uStack_2c;
    }
  }
  uVar8 = FUN_01846048(uVar5,uStack_2c,0x15180,0);
  lVar1 = (uVar8 & 0xffffffff) * 0x15180;
  uVar3 = (uint)lVar1;
  iVar6 = uVar5 - uVar3;
  iVar4 = uStack_2c -
          ((int)(uVar8 >> 0x20) * 0x15180 + (int)((ulonglong)lVar1 >> 0x20) + (uint)(uVar5 < uVar3))
  ;
  iVar2 = iVar4 >> 0x1f;
  lVar1 = uVar8 + CONCAT44(iVar2,iVar2);
  uVar5 = (uint)lVar1;
  if (((int)((ulonglong)lVar1 >> 0x20) - (uint)(uVar5 < 0x7ff506c5) != -1) ||
     (iVar2 = FUN_00f6b330(uVar5 + 0xaf93b,0xaf93b,uVar5 + 0x800af93b), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0035d71c,0x25,&DAT_0188028c);
  }
  if (iVar4 < 0) {
    iVar6 = iVar6 + 0x15180;
  }
  FUN_00f6c49c(&local_48,iVar2,iVar6);
  if (local_48 == 0) {
    *param_1 = iVar2;
    param_1[1] = iVar6;
    param_1[2] = iVar7;
    param_1[3] = local_44;
    return;
  }
  if (local_48 == 1) {
    pcStack_34 = FUN_00f6c370;
    iStack_4c = local_44;
    local_60 = local_40;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005752dd,&local_38,&DAT_018802dc);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_0035d71c,0x25,&DAT_018802dc);
}

