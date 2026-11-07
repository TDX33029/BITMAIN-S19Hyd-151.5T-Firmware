// FUN_0191da2c @ 0191da2c size=516 calls_out=6 calls_in=3
// strings: 

void FUN_0191da2c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,short *param_7,int param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 **ppuVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined1 *local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int iStack_134;
  int local_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 *local_c8 [2];
  undefined1 auStack_c0 [120];
  undefined1 *local_48 [9];
  
  if (param_8 != 0) {
    param_8 = param_8 * 0xc;
    do {
      if ((*param_7 == *(short *)(param_6 + 0xc)) &&
         ((*(short *)(param_6 + 0xc) != 0xd || (param_7[1] == *(short *)(param_6 + 0xe))))) {
        iVar7 = *(int *)(param_7 + 2);
        iVar5 = *(int *)(param_7 + 4);
        FUN_01aefc50(local_c8,param_4,param_5);
        if (local_c8[0] == (undefined1 *)0x1) {
          FUN_01917d68(&local_140,auStack_c0);
          *param_1 = local_140;
          param_1[1] = local_13c;
          param_1[2] = local_138;
          param_1[3] = iStack_134;
          param_1[4] = local_130;
          param_1[5] = iStack_12c;
          param_1[6] = iStack_128;
          param_1[7] = iStack_124;
          return;
        }
        FUN_01bed4e2((uint)&local_148 | 4,(uint)local_c8 | 4,0x7c);
        if (iVar5 == 0) goto LAB_0191dbc4;
        iVar5 = iVar5 << 3;
        uVar4 = *(undefined4 *)(param_6 + 4);
        uVar8 = *(undefined4 *)(param_6 + 8);
        piVar9 = (int *)(iVar7 + 4);
        goto LAB_0191db64;
      }
      param_8 = param_8 + -0xc;
      param_7 = param_7 + 6;
    } while (param_8 != 0);
  }
  *param_1 = (int)&DAT_8000001c;
  param_1[1] = 0x3e;
  return;
LAB_0191db64:
  FUN_01aedbe8(local_48,piVar9[-1],*(undefined4 *)(*piVar9 + 0x10),*(undefined4 *)(*piVar9 + 0x14),
               local_100,local_fc,param_2,param_3,uVar4,uVar8);
  if (local_48[0] == (undefined1 *)0x8000002d) {
    *param_1 = -0x7fffffd7;
    goto LAB_0191dc14;
  }
  if (local_48[0] != &DAT_8000002c) {
    ppuVar6 = local_c8;
    FUN_01917d68(ppuVar6,local_48);
    goto LAB_0191dc00;
  }
  piVar9 = piVar9 + 2;
  FUN_01918228(local_48);
  iVar5 = iVar5 + -8;
  if (iVar5 == 0) {
LAB_0191dbc4:
    local_c8[0] = &DAT_8000002c;
    ppuVar6 = &local_148;
    FUN_01917d68(ppuVar6,local_c8);
LAB_0191dc00:
    puVar1 = ppuVar6[1];
    puVar2 = ppuVar6[2];
    puVar3 = ppuVar6[3];
    *param_1 = (int)*ppuVar6;
    param_1[1] = (int)puVar1;
    param_1[2] = (int)puVar2;
    param_1[3] = (int)puVar3;
    puVar1 = ppuVar6[5];
    puVar2 = ppuVar6[6];
    puVar3 = ppuVar6[7];
    param_1[4] = (int)ppuVar6[4];
    param_1[5] = (int)puVar1;
    param_1[6] = (int)puVar2;
    param_1[7] = (int)puVar3;
LAB_0191dc14:
    if (local_144 == -0x80000000) {
      return;
    }
    FUN_0134bd64(local_144,local_140);
    return;
  }
  goto LAB_0191db64;
}

