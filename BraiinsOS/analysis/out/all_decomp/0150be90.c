// FUN_0150be90 @ 0150be90 size=1092 calls_out=5 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x0150c190) */
/* WARNING: Removing unreachable block (ram,0x0150c318) */
/* WARNING: Removing unreachable block (ram,0x0150c1a4) */

void FUN_0150be90(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined2 *puVar11;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int *local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int *piStack_48;
  int iStack_44;
  undefined1 local_3c;
  int *local_2c;
  int local_28;
  
  iVar5 = param_3[2];
  iVar1 = iVar5;
  if ((uint)(*param_3 - iVar5) < 3) {
    FUN_0154e5f8(param_3,iVar5,3,1,1);
    iVar1 = param_3[2];
  }
  iVar2 = param_3[1];
  *(undefined2 *)(iVar2 + iVar1) = 0xffff;
  *(undefined1 *)((undefined2 *)(iVar2 + iVar1) + 1) = 0xff;
  param_3[2] = iVar1 + 3;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0x10000;
  local_60 = param_3;
  local_5c = iVar5;
  if (param_2 != 0) {
    iVar1 = param_1 + param_2 * 0x18;
    do {
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      uVar9 = *(uint *)(param_1 + 0x14);
      iVar5 = *param_3;
      iVar2 = param_3[2];
      if ((uint)(iVar5 - iVar2) < 3) {
        FUN_0154e5f8(param_3,iVar2,3,1,1);
        iVar5 = *param_3;
        iVar2 = param_3[2];
      }
      iVar3 = param_3[1];
      iVar6 = iVar2 + 3;
      param_3[2] = iVar6;
      *(ushort *)(iVar3 + iVar2) =
           (ushort)(((uVar9 >> 8 & 0xff) << 0x10) >> 8) | (ushort)(uVar9 >> 0x10) & 0xff;
      *(char *)((ushort *)(iVar3 + iVar2) + 1) = (char)uVar9;
      if ((uint)(iVar5 - iVar6) < uVar9) {
        FUN_0154e5f8(param_3,iVar6,uVar9,1,1);
        iVar6 = param_3[2];
      }
      FUN_016dd1aa(param_3[1] + iVar6,uVar10,uVar9);
      iVar6 = iVar6 + uVar9;
      iVar3 = *(int *)(param_1 + 4);
      iVar5 = *(int *)(param_1 + 8);
      param_3[2] = iVar6;
      iVar2 = iVar6;
      if ((uint)(*param_3 - iVar6) < 2) {
        FUN_0154e5f8(param_3,iVar6,2,1,1);
        iVar2 = param_3[2];
      }
      param_3[2] = iVar2 + 2;
      *(undefined2 *)(param_3[1] + iVar2) = 0xffff;
      local_58 = 0x19191919;
      local_54 = 0x19191919;
      local_50 = 0x19191919;
      local_4c = 0x19191919;
      piStack_48 = param_3;
      iStack_44 = iVar6;
      if (iVar5 != 0) {
        iVar5 = iVar5 << 4;
        puVar11 = (undefined2 *)(iVar3 + 0xe);
        do {
          if (*(int *)(puVar11 + -7) != -0x7fffffff) {
                    /* WARNING: Could not recover jumptable at 0x0150bff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_0150bff4 + *(int *)(&DAT_0150bff4 + (uint)(ushort)puVar11[-1] * 4)))
                      (*puVar11);
            return;
          }
          iVar2 = param_3[2];
          if ((uint)(*param_3 - iVar2) < 2) {
            FUN_0154e5f8(param_3,iVar2,2,1,1);
            iVar2 = param_3[2];
          }
          iVar6 = iVar2 + 2;
          param_3[2] = iVar6;
          *(undefined2 *)(param_3[1] + iVar2) = 0x500;
          iVar3 = iVar6;
          if ((uint)(*param_3 - iVar6) < 2) {
            FUN_0154e5f8(param_3,iVar6,2,1,1);
            iVar3 = param_3[2];
          }
          iVar7 = iVar3 + 2;
          param_3[2] = iVar7;
          *(undefined2 *)(param_3[1] + iVar3) = 0xffff;
          local_3c = 0x19;
          local_2c = param_3;
          local_28 = iVar6;
          if (iVar7 == *param_3) {
            FUN_006029c0(param_3);
          }
          uVar10 = *(undefined4 *)(puVar11 + -3);
          *(undefined1 *)(param_3[1] + iVar7) = 1;
          iVar3 = iVar3 + 3;
          iVar7 = *param_3;
          uVar9 = *(uint *)(puVar11 + -1);
          param_3[2] = iVar3;
          if ((uint)(iVar7 - iVar3) < 3) {
            FUN_0154e5f8(param_3,iVar3,3,1,1);
            iVar7 = *param_3;
            iVar3 = param_3[2];
          }
          iVar4 = param_3[1];
          iVar8 = iVar3 + 3;
          param_3[2] = iVar8;
          *(ushort *)(iVar4 + iVar3) =
               (ushort)(((uVar9 >> 8 & 0xff) << 0x10) >> 8) | (ushort)(uVar9 >> 0x10) & 0xff;
          *(char *)((ushort *)(iVar4 + iVar3) + 1) = (char)uVar9;
          if ((uint)(iVar7 - iVar8) < uVar9) {
            FUN_0154e5f8(param_3,iVar8,uVar9,1,1);
            iVar8 = param_3[2];
          }
          FUN_016dd1aa(param_3[1] + iVar8,uVar10,uVar9);
          uVar9 = iVar8 + uVar9;
          param_3[2] = uVar9;
          if (uVar9 < iVar2 + 4U) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(iVar6,iVar2 + 4U,uVar9,&DAT_018a79c4);
          }
          puVar11 = puVar11 + 8;
          iVar5 = iVar5 + -0x10;
          uVar9 = (uVar9 - iVar6) - 2;
          *(ushort *)(param_3[1] + iVar6) =
               (ushort)((uVar9 & 0xff) << 8) | (ushort)(uVar9 >> 8) & 0xff;
        } while (iVar5 != 0);
      }
      FUN_0152f8f8(&local_58);
      param_1 = param_1 + 0x18;
    } while (param_1 != iVar1);
  }
  FUN_0152f8f8(&local_70);
  return;
}

