// FUN_01549ce8 @ 01549ce8 size=552 calls_out=6 calls_in=2
// strings: 

void FUN_01549ce8(undefined4 *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  uint unaff_r9;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined2 local_f0;
  
  if ((*param_4 < 0x80000001) && (param_4[3] == 0x80000009)) {
    FUN_0151eddc(param_2,param_4);
    if (param_4[6] == 0) {
      puVar5 = (ushort *)0x0;
      if (param_4[9] != 0) {
        iVar1 = param_4[9] << 4;
        puVar2 = (uint *)param_4[8];
        do {
          uVar4 = *puVar2;
          iVar3 = 3;
          if (0x80000000 < uVar4) {
            iVar3 = uVar4 + 0x7fffffff;
          }
          if ((1 < iVar3 - 1U) && ((iVar3 != 3 || ((short)puVar2[3] == 0xd)))) {
            if (uVar4 == 0x80000001) {
              puVar5 = (ushort *)puVar2[2];
              unaff_r9 = puVar2[3];
            }
            break;
          }
          iVar1 = iVar1 + -0x10;
          puVar2 = puVar2 + 4;
        } while (iVar1 != 0);
      }
      if (puVar5 == (ushort *)0x0) {
        puVar5 = (ushort *)&SUB_00000002;
        unaff_r9 = 0;
      }
      if (unaff_r9 * 4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01549ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_01549ec8 + *(int *)(&DAT_01549ec8 + (uint)*puVar5 * 4)))
                  (&DAT_01549ec8,unaff_r9 * 4,0xfc,0x201);
        return;
      }
      local_f0 = 4;
      local_164 = 0x60001;
      local_168 = 0x80000001;
      FUN_01525ed4(param_3,&local_168,*(char *)(param_3 + 0x31) == '\x02');
      *(undefined1 *)(param_3 + 0x255) = 1;
      *param_1 = 0x8000001b;
      param_1[1] = 0x80000006;
      param_1[2] = uStack_194;
      param_1[3] = uStack_190;
    }
    else {
      local_f0 = 4;
      local_164 = 0x100001;
      local_168 = 0x80000001;
      FUN_01525ed4(param_3,&local_168,*(char *)(param_3 + 0x31) == '\x02');
      *(undefined1 *)(param_3 + 0x255) = 1;
      *(undefined1 *)(param_1 + 1) = 5;
      *param_1 = 0x80000016;
    }
  }
  else {
    FUN_015622b4(&local_168,param_4,&DAT_0040c784,1,&DAT_0040c0b7,1);
    param_1[2] = local_160;
    param_1[3] = uStack_15c;
    param_1[4] = uStack_158;
    param_1[5] = uStack_154;
    param_1[6] = uStack_150;
    param_1[7] = uStack_14c;
    *param_1 = local_168;
    param_1[1] = local_164;
  }
  FUN_015430a0(param_4);
  FUN_0154ab18(param_2);
  thunk_FUN_016d3fb4(param_2);
  return;
}

