// FUN_00a64584 @ 00a64584 size=380 calls_out=3 calls_in=1
// strings: 

void FUN_00a64584(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *unaff_r8;
  uint uVar10;
  uint *puVar11;
  bool bVar12;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  puVar11 = (uint *)param_1[6];
  uVar1 = param_1[3];
  uVar5 = param_1[4];
  uVar9 = *param_1;
  uVar10 = param_1[1];
  puVar2 = (uint *)param_1[8];
  do {
    if ((uVar9 & 1) == 0) {
      puVar4 = puVar2;
      if (puVar11 != puVar2) {
        unaff_r8 = puVar11 + 0xd;
        puVar4 = (uint *)*puVar11;
        param_1[6] = (uint)unaff_r8;
      }
      if (puVar11 == puVar2 || puVar4 == (uint *)0x2) {
        param_1[4] = 0;
        FUN_00a85af4(param_1 + 5);
        if (param_1[2] != 0) {
          thunk_FUN_016d3fb4(uVar1);
        }
        return;
      }
      uVar10 = puVar11[1];
      uVar6 = puVar11[8];
      uVar7 = puVar11[9];
      uVar8 = puVar11[10];
      uStack_3c = puVar11[0xb];
      local_38 = puVar11[3];
      uStack_34 = puVar11[4];
      uStack_30 = puVar11[5];
      uStack_2c = puVar11[6];
      uStack_28 = puVar11[7];
      uVar9 = (uint)puVar4 & 1;
      *param_1 = uVar9;
      param_1[1] = uVar10;
      puVar11 = unaff_r8;
      if (uVar6 != 0) {
        (**(code **)(uVar6 + 0x10))(&uStack_3c,uVar7,uVar8);
      }
    }
    else {
      if (uVar5 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar10,uVar5,&DAT_018a65ec);
      }
      iVar3 = uVar1 + uVar10 * 0x24;
      bVar12 = *(int *)(iVar3 + 8) != 0;
      uVar9 = (uint)bVar12;
      if (bVar12) {
        uVar10 = *(uint *)(iVar3 + 0xc);
      }
      *param_1 = uVar9;
      param_1[1] = uVar10;
      local_38 = *(uint *)(iVar3 + 0x10);
      uStack_34 = *(uint *)(iVar3 + 0x14);
      uStack_30 = *(uint *)(iVar3 + 0x18);
      uStack_2c = *(uint *)(iVar3 + 0x1c);
      uStack_28 = *(uint *)(iVar3 + 0x20);
    }
    (**(code **)(local_38 + 0x10))(&uStack_2c,uStack_34,uStack_30);
  } while( true );
}

