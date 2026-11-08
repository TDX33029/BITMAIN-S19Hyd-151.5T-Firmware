// FUN_0168989c @ 0168989c size=568 calls_out=3 calls_in=1
// strings: assertion failed: self.height > 0

void FUN_0168989c(int *param_1,int *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  char local_65;
  int local_64 [3];
  int local_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int *local_3c;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar11 = *param_2;
  iVar5 = -0x80000000;
  if (iVar11 != 0) {
    iVar4 = param_2[1];
    iVar5 = iVar4;
    local_30 = iVar11;
    do {
      uVar7 = (uint)*(ushort *)(local_30 + 0xb6);
      iVar8 = uVar7 << 2;
      iVar3 = 1;
      do {
        local_28 = iVar3;
        if (iVar8 == 0) goto LAB_0168991c;
        uVar9 = *(uint *)(local_30 + local_28 * 4);
        iVar8 = iVar8 + -4;
        bVar12 = param_3 < uVar9;
        bVar1 = !bVar12 && param_3 != uVar9;
        iVar3 = local_28 + 1;
      } while ((char)(bVar1 - bVar12) == '\x01');
      if (bVar1 == bVar12) {
        local_28 = local_28 + -1;
        local_65 = '\0';
        if (iVar5 == 0) {
          local_2c = 0;
          FUN_0167c1f0(&local_4c,&local_30,&local_65);
        }
        else {
          local_64[0] = *(int *)(local_30 + local_28 * 4 + 0xb8);
          if (iVar5 != 1) {
            iVar8 = 1;
            do {
              iVar8 = iVar8 + 1;
              local_64[0] = *(int *)(local_64[0] + (uint)*(ushort *)(local_64[0] + 0xb6) * 4 + 0xb8)
              ;
            } while (iVar5 != iVar8);
          }
          local_64[1] = 0;
          local_64[2] = *(ushort *)(local_64[0] + 0xb6) - 1;
          FUN_0167c1f0(&local_4c,local_64,&local_65);
          local_58 = local_48;
          iStack_54 = iStack_44;
          iStack_50 = iStack_40;
          piVar10 = local_3c;
          if (*(ushort *)((int)local_3c + 0xb6) <= local_34) {
            do {
              local_3c = (int *)*piVar10;
              local_34 = (uint)*(ushort *)(piVar10 + 0x2d);
              piVar10 = local_3c;
            } while (*(ushort *)((int)local_3c + 0xb6) <= local_34);
          }
          local_3c[local_34 + 1] = local_4c;
          local_30 = local_3c[local_34 * 3 + 0xc];
          local_2c = local_3c[local_34 * 3 + 0xd];
          local_28 = local_3c[local_34 * 3 + 0xe];
          local_3c[local_34 * 3 + 0xc] = local_48;
          local_3c[local_34 * 3 + 0xd] = iStack_44;
          local_3c[local_34 * 3 + 0xe] = iStack_40;
          local_48 = local_30;
          iStack_44 = local_2c;
          iStack_40 = local_28;
        }
        iVar2 = iStack_40;
        iVar3 = iStack_44;
        iVar8 = local_48;
        param_2[2] = param_2[2] + -1;
        if (local_65 == '\x01') {
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("assertion failed: self.height > 0",0x21,&DAT_01d2ff00);
          }
          puVar6 = *(undefined4 **)(iVar11 + 0xb8);
          *param_2 = (int)puVar6;
          param_2[1] = iVar4 + -1;
          *puVar6 = 0;
          thunk_FUN_01be4678(iVar11);
        }
        iVar5 = -0x80000000;
        if (iVar8 != -0x80000000) {
          param_1[1] = iVar3;
          param_1[2] = iVar2;
          iVar5 = iVar8;
        }
        break;
      }
      uVar7 = local_28 - 1;
LAB_0168991c:
      if (iVar5 == 0) goto LAB_01689ab0;
      iVar5 = iVar5 + -1;
      local_30 = *(int *)(local_30 + uVar7 * 4 + 0xb8);
    } while( true );
  }
LAB_01689aa4:
  *param_1 = iVar5;
  return;
LAB_01689ab0:
  iVar5 = -0x80000000;
  goto LAB_01689aa4;
}

