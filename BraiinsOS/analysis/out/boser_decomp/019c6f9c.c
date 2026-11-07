// FUN_019c6f9c @ 019c6f9c size=472 calls_out=9 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019c6f9c(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  uint local_80 [2];
  int local_78;
  char local_74;
  undefined2 local_73;
  undefined1 local_71;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int *local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  
  do {
    do {
      while( true ) {
        FUN_019bb288(local_80,param_2);
        puVar1 = local_70;
        if ((local_80[0] & 1) == 0) {
          *param_1 = -0x80000000;
          return;
        }
        if (local_78 != 0) break;
        if (local_74 == '\x03') {
          uVar7 = *local_70;
          puVar8 = (undefined4 *)local_70[1];
          pcVar6 = (code *)*puVar8;
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(uVar7);
          }
          if (puVar8[1] != 0) {
            thunk_FUN_01be4678(uVar7);
          }
          thunk_FUN_01be4678(puVar1);
        }
      }
      *(undefined1 *)((undefined2 *)((uint)&local_48 | 5) + 1) = local_71;
      local_44 = (int *)CONCAT31(local_44._1_3_,local_74);
      *(undefined2 *)((uint)&local_48 | 5) = local_73;
      local_40 = local_70;
      local_3c = local_6c;
      uStack_38 = uStack_68;
      uStack_34 = uStack_64;
      uStack_2c = uStack_5c;
      local_48 = local_78;
      FUN_019a66e4(&local_54,*(undefined4 *)(iStack_60 + 0xc),*(undefined4 *)(iStack_60 + 0x10),
                   local_78,(int)local_44 + -1);
      uVar3 = local_4c;
      uVar7 = local_50;
      iVar2 = local_54;
      FUN_019db4b0(&local_48);
    } while (iVar2 == -0x80000000);
    uVar9 = FUN_019b00d0(uVar7,uVar3);
    if (((((int)uVar9 != 0) &&
         (FUN_012fbd94(&local_48,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20)), local_48 == 0)) &&
        (&DAT_00000003 < local_40)) && (*local_44 == 0x2d627375)) {
      FUN_019ac8ac(&local_48,uVar7,uVar3);
      puVar1 = local_40;
      piVar5 = local_44;
      iVar4 = local_48;
      if (local_48 != -0x80000000) {
        FUN_0134bd64(iVar2,uVar7);
        *param_1 = iVar4;
        param_1[1] = (int)piVar5;
        param_1[2] = (int)puVar1;
        return;
      }
      FUN_0069263c((uint)local_44 & 0xff,local_40);
    }
    FUN_0134bd64(iVar2,uVar7);
  } while( true );
}

