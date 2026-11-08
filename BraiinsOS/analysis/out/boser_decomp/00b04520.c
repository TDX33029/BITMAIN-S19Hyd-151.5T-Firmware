// FUN_00b04520 @ 00b04520 size=568 calls_out=12 calls_in=2
// strings: 

undefined4 FUN_00b04520(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  byte local_4c;
  char local_4b;
  undefined4 **local_48;
  undefined1 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  byte local_34;
  char local_33;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  
  bVar1 = *(byte *)(param_1 + 0xc);
  cVar2 = *(char *)(param_1 + 0xd);
  FUN_00a438cc(&local_58);
  local_4c = bVar1;
  local_4b = cVar2;
  FUN_006666fc(&local_40,local_54,local_50);
  puVar8 = local_38;
  puVar6 = local_3c;
  puVar4 = local_40;
  uVar12 = *(undefined4 *)(param_1 + 4);
  uVar13 = *(undefined4 *)(param_1 + 8);
  FUN_019a5900(&local_30,uVar12,uVar13);
  puVar7 = local_2c;
  puVar5 = local_30;
  if (local_30 == (undefined4 *)&DAT_80000000) {
    local_30 = local_2c;
    local_2c = local_28;
    local_3c = (undefined4 *)FUN_012749e4(&local_30);
LAB_00b045e4:
    (**(code **)*local_3c)(local_3c);
LAB_00b04640:
    FUN_019bb7e0(puVar4,puVar6);
  }
  else {
    uVar14 = FUN_013245a0(local_2c);
    FUN_00a3a380(&local_40,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    FUN_019bb7e0(puVar5,puVar7);
    puVar7 = local_3c;
    puVar5 = local_40;
    if (local_40 == (undefined4 *)&DAT_80000000) goto LAB_00b045e4;
    if (local_38 != puVar8) {
LAB_00b04634:
      FUN_019bb7e0(puVar5,puVar7);
      goto LAB_00b04640;
    }
    uVar9 = thunk_FUN_01bed842(local_3c,puVar6,puVar8);
    uVar3 = uVar9;
    if (uVar9 == 0) {
      uVar3 = (uint)local_34;
    }
    if (uVar9 != 0 || bVar1 != uVar3) goto LAB_00b04634;
    FUN_019bb7e0(puVar5,puVar7);
    FUN_019bb7e0(puVar4,puVar6);
    uVar11 = 0;
    if (cVar2 == local_33) goto LAB_00b046ec;
  }
  local_38 = (undefined4 *)0x0;
  local_3c = (undefined4 *)&DAT_00000001;
  local_40 = (undefined4 *)0x0;
  iVar10 = FUN_00a3acd0(&local_58,&local_40,&DAT_01c0e3e4);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_30,&DAT_01c0e3fc,&DAT_01d30334);
  }
  local_48 = &local_30;
  local_30 = local_40;
  local_2c = local_3c;
  local_28 = local_38;
  local_44 = &LAB_00632348;
  FUN_00664898(&local_40,&DAT_00582d7f,&local_48);
  puVar6 = local_3c;
  puVar4 = local_40;
  uVar11 = FUN_00adaf40(uVar12,uVar13,local_3c,local_38);
  FUN_019bb7e0(puVar4,puVar6);
  FUN_019bb7e0(local_30,local_2c);
LAB_00b046ec:
  FUN_019bb7e0(local_58,local_54);
  return uVar11;
}

