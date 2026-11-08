// FUN_016500b8 @ 016500b8 size=400 calls_out=4 calls_in=1
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0165021c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_016500b8(undefined4 *param_1)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint in_fpscr;
  double in_d0;
  double dVar12;
  double dVar13;
  uint local_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  uint local_50;
  undefined4 uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  
  puVar7 = (undefined1 *)param_1[0xc];
  if (puVar7 != &DAT_3b9aca00) {
    uVar9 = param_1[10];
    uVar11 = param_1[0xb];
    FUN_015f3b0c(&local_50,1);
    local_70 = local_50;
    uStack_6c = uStack_4c;
    uStack_68 = local_48;
    local_60 = uVar9;
    local_5c = uVar11;
    local_58 = puVar7;
    FUN_015f3c24(&local_50,&local_70,&local_60);
    uVar10 = param_1[4];
    uVar4 = (uint)((ulonglong)local_48 * 1000000000);
    lVar2 = (ulonglong)uStack_44 * 1000000000 + ((ulonglong)local_48 * 1000000000 >> 0x20);
    uVar8 = (uint)lVar2;
    uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar4 + uStack_40;
    bVar1 = CARRY4(uVar8,(uint)CARRY4(uVar4,uStack_40));
    iVar3 = uVar8 + CARRY4(uVar4,uStack_40);
    if (uVar6 + bVar1 != 0 || CARRY4(uVar6,(uint)bVar1)) {
      uVar5 = 0xffffffff;
      iVar3 = -1;
    }
    iVar3 = param_1[5] + iVar3 + (uint)CARRY4(uVar10,uVar5);
    uVar5 = uVar10 + uVar5;
    if ((local_50 & 1) != 0) {
      iVar3 = param_1[5];
      uVar5 = uVar10;
    }
    param_1[4] = uVar5;
    param_1[5] = iVar3;
  }
  iVar3 = param_1[0x10];
  if (iVar3 != 0) {
    FUN_015f3b0c(&local_50,1);
    local_60 = *param_1;
    local_5c = param_1[1];
    local_58 = (undefined1 *)param_1[2];
    local_70 = local_50;
    uStack_6c = uStack_4c;
    uStack_68 = local_48;
    FUN_015f3c24(&local_50,&local_70,&local_60);
    uVar5 = (uint)((ulonglong)local_48 * 1000000000);
    lVar2 = (ulonglong)uStack_44 * 1000000000 + ((ulonglong)local_48 * 1000000000 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
    bVar1 = CARRY4(uVar4,(uint)CARRY4(uVar5,uStack_40));
    FUN_0184590c(uVar5 + uStack_40,uVar4 + CARRY4(uVar5,uStack_40),uVar6 + bVar1,
                 CARRY4(uVar6,(uint)bVar1));
    dVar13 = (double)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    dVar12 = in_d0;
    if ((local_50 & 1) != 0) {
      dVar12 = 0.0;
    }
    FUN_016d5bf8(0xcccccccd,(int)((ulonglong)in_d0 >> 0x20),SUB84(dVar13,0));
    *(double *)(param_1 + 0xe) =
         *(double *)(param_1 + 0xe) * (1.0 - (1.0 - in_d0)) + (dVar12 / dVar13) * (1.0 - in_d0);
  }
  return;
}

