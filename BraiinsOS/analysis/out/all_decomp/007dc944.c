// FUN_007dc944 @ 007dc944 size=644 calls_out=8 calls_in=1
// strings: 

void FUN_007dc944(undefined1 *param_1,byte *param_2,byte *param_3,byte param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined *puVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  byte *pbStack_84;
  byte *pbStack_80;
  byte *local_7c;
  undefined1 auStack_78 [12];
  byte **local_6c;
  code *local_68;
  byte ***local_64;
  code *local_60;
  byte **local_5c;
  code *local_58;
  undefined1 auStack_54 [12];
  byte *local_48;
  int local_44;
  byte *local_40;
  undefined4 local_3c;
  byte **local_38;
  byte local_31;
  undefined1 auStack_30 [12];
  
  pbStack_84 = param_2;
  pbStack_80 = param_3;
  if (param_3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0,0,&DAT_0185ea5c);
  }
  local_7c = (byte *)(uint)*param_2;
  if (param_3 == local_7c) {
    pbVar7 = param_3 + -2;
    if (param_3 == (byte *)0x1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,0xffffffff,1,&DAT_0185ea7c);
    }
    if (pbVar7 == (byte *)0x0) {
      if (*(short *)param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(1,0,param_3,&DAT_0185ea6c);
      }
    }
    else {
      uVar4 = 0;
      pbVar9 = pbVar7;
      pbVar11 = param_2;
      do {
        pbVar9 = pbVar9 + -1;
        uVar4 = uVar4 + *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (pbVar9 != (byte *)0x0);
      if ((uVar4 & 0xffff) ==
          ((uint)*(ushort *)(param_2 + (int)pbVar7) << 0x18 |
          (uint)(*(ushort *)(param_2 + (int)pbVar7) >> 8) << 0x10) >> 0x10) {
        if (param_3 == (byte *)0x3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(0,0,&DAT_0185ea8c);
        }
        if (param_3 == (byte *)0x4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(1,1,&DAT_0185ea9c);
        }
        bVar1 = param_2[1];
        param_3 = param_3 + -5;
        bVar2 = param_2[2];
        if (param_3 == (byte *)0x0) {
          pbVar7 = (byte *)0x0;
          iVar5 = 1;
        }
        else {
          iVar5 = thunk_FUN_016d4a50(param_3);
          pbVar7 = param_3;
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,param_3);
          }
        }
        FUN_016dd1aa(iVar5,param_2 + 3,param_3);
        local_38 = &local_48;
        local_3c = CONCAT31(CONCAT21(local_3c._2_2_,bVar2),bVar1);
        if (param_4 != bVar1) {
          local_64 = &local_38;
          local_6c = (byte **)&local_31;
          local_60 = FUN_007dcddc;
          local_68 = FUN_00fac0c8;
          local_48 = pbVar7;
          local_44 = iVar5;
          local_40 = param_3;
          local_31 = param_4;
          FUN_00600d2c(auStack_30,&DAT_00342f94,&local_6c);
          uVar6 = FUN_00808de4(auStack_30);
          *(undefined4 *)(param_1 + 4) = uVar6;
          *param_1 = 3;
          if (local_48 == (byte *)0x0) {
            return;
          }
          thunk_FUN_016d3fb4(local_44);
          return;
        }
        *(byte **)(param_1 + 4) = pbVar7;
        *(int *)(param_1 + 8) = iVar5;
        *(byte **)(param_1 + 0xc) = param_3;
        *(undefined4 *)(param_1 + 0x10) = local_3c;
        uVar3 = 4;
        goto LAB_007dca54;
      }
    }
    puVar10 = auStack_54;
    local_6c = &pbStack_84;
    puVar8 = &DAT_00343021;
    local_68 = FUN_007dcd50;
  }
  else {
    puVar10 = auStack_78;
    local_5c = &pbStack_84;
    local_64 = (byte ***)&local_48;
    puVar8 = &DAT_0034304e;
    local_58 = FUN_007dcd50;
    local_60 = (code *)&LAB_00fac484;
    local_68 = (code *)&LAB_00fac484;
    local_6c = &local_7c;
    local_48 = param_3;
  }
  FUN_00600d2c(puVar10,puVar8,&local_6c);
  uVar6 = FUN_00808de4(puVar10);
  *(undefined4 *)(param_1 + 4) = uVar6;
  uVar3 = 3;
LAB_007dca54:
  *param_1 = uVar3;
  return;
}

