// FUN_0118b4a8 @ 0118b4a8 size=520 calls_out=2 calls_in=0
// strings: 

byte FUN_0118b4a8(int param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  byte bVar14;
  int iVar15;
  undefined8 uVar16;
  uint local_48 [3];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  bVar14 = 1;
  if (*param_2 == '\x05') {
    local_28 = *(int *)(param_2 + 0xc);
    if (local_28 != 0) {
      local_48[2] = *(uint *)(param_2 + 4);
      bVar14 = 0;
      local_3c = *(undefined4 *)(param_2 + 8);
      iVar15 = *(int *)(param_1 + 4);
      iVar6 = *(int *)(param_1 + 8);
      if (local_48[2] == 0) {
        local_28 = 0;
      }
      iVar11 = *(int *)(param_1 + 0x14);
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      local_48[0] = (uint)(local_48[2] != 0);
      local_34 = 0;
      local_48[1] = 0;
      local_38 = local_48[0];
      local_30 = local_48[2];
      local_2c = local_3c;
      if (iVar6 != 0) {
        do {
          uVar16 = FUN_00f45584(local_48);
          uVar7 = (undefined4)((ulonglong)uVar16 >> 0x20);
          iVar4 = (int)uVar16;
          if (iVar4 == 0) {
            return bVar14;
          }
          uVar9 = *(undefined4 *)(iVar4 + 4);
          iVar12 = *(int *)(iVar4 + 8);
          iVar3 = iVar6 << 5;
          iVar5 = iVar15;
          while ((*(int *)(iVar5 + 8) != iVar12 ||
                 (iVar2 = thunk_FUN_016dd50a(*(undefined4 *)(iVar5 + 4),uVar9,iVar12), iVar2 != 0)))
          {
            iVar5 = iVar5 + 0x20;
            iVar3 = iVar3 + -0x20;
            if (iVar3 == 0) goto LAB_0118b6a0;
          }
          iVar3 = *(int *)(iVar5 + 0xc);
          uVar8 = 1;
          if ((int)*(uint *)(iVar3 + 8) < 0) {
            uVar8 = *(uint *)(iVar3 + 8) ^ 0x80000000;
          }
          if (uVar8 == 0) {
            if (*(int *)(iVar3 + 0xc) != 0) goto LAB_0118b6a0;
          }
          else if (uVar8 == 1) {
            puVar10 = *(undefined4 **)(iVar3 + 0xc);
            iVar3 = *(int *)(iVar3 + 0x10);
            if (iVar3 == 1) {
              iVar3 = (**(code **)(puVar10[1] + 0x10))(*puVar10,uVar7,param_3);
              if (iVar3 == 0) goto LAB_0118b6a0;
            }
            else if (iVar3 != 0) {
              puVar13 = puVar10 + iVar3 * 8;
              do {
                iVar3 = (**(code **)(puVar10[1] + 0x10))(*puVar10,uVar7,param_3);
                if (iVar3 == 0) goto LAB_0118b6a0;
                puVar10 = puVar10 + 8;
              } while (puVar10 != puVar13);
            }
          }
          else {
            puVar10 = *(undefined4 **)(iVar3 + 0x10);
            iVar3 = *(int *)(iVar3 + 0x14) << 5;
            while (iVar3 != 0) {
              iVar5 = (**(code **)(puVar10[1] + 0x10))(*puVar10,uVar7,param_3);
              iVar3 = iVar3 + -0x20;
              puVar10 = puVar10 + 8;
              if (iVar5 == 0) goto LAB_0118b6a0;
            }
          }
          if (*(int *)(iVar4 + 8) == iVar11) {
            iVar4 = thunk_FUN_016dd50a(*(undefined4 *)(iVar4 + 4),uVar1,iVar11);
            bVar14 = iVar4 == 0 | bVar14;
          }
        } while( true );
      }
      FUN_00f45584(local_48);
    }
LAB_0118b6a0:
    bVar14 = 0;
  }
  return bVar14;
}

