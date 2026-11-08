// FUN_006a82b8 @ 006a82b8 size=868 calls_out=8 calls_in=0
// strings: failed to write frame to transport | failed to write frame to transport

void FUN_006a82b8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char local_40;
  undefined3 local_3f;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar2 = (int *)FUN_007853dc(param_2 + 5,*param_3);
  if (piVar2 == (int *)0x0) {
    *param_1 = 0x8000000e;
    return;
  }
  iVar4 = *piVar2;
  if ((*(uint *)(iVar4 + 8) & 1) != 0) {
    puVar5 = (undefined1 *)*param_2;
    if (puVar5 != (undefined1 *)0x80000000) {
      if (*(uint *)(iVar4 + 0xe4) < *(uint *)(iVar4 + 0xf0)) {
LAB_006a831c:
        local_34 = (undefined1 *)param_2[1];
        local_30 = (undefined1 *)param_2[2];
        uStack_2c = param_2[3];
        uStack_28 = param_2[4];
        *param_2 = 0x80000000;
        local_38 = puVar5;
        FUN_007b28ac(&local_54,iVar4 + 0x10,&local_38);
        puVar5 = local_54;
      }
      else {
        do {
          if (*(int *)(iVar4 + 0xe4) == 0) goto LAB_006a831c;
          FUN_00754020(&local_40,iVar4 + 0x10,param_3,iVar4 + 0xe0);
          if (local_40 == '\x05') {
            puVar5 = (undefined1 *)0x8000000e;
            goto LAB_006a8408;
          }
          if (local_40 != '\x04') {
            local_30 = local_3c;
            local_38 = &DAT_80000008;
            local_34 = (undefined1 *)CONCAT31(local_3f,local_40);
            goto LAB_006a83f4;
          }
        } while (local_3c != (undefined1 *)0x0);
        FUN_015e79d4(&local_34,0x17,"failed to write frame to transport",0x22);
LAB_006a83f4:
        local_50 = local_34;
        puStack_4c = local_30;
        uStack_48 = uStack_2c;
        uStack_44 = uStack_28;
        puVar5 = &DAT_80000008;
      }
LAB_006a8408:
      if (puVar5 != &DAT_8000000d) {
        if (puVar5 != (undefined1 *)0x8000000e) {
          param_1[1] = local_50;
          param_1[2] = puStack_4c;
          param_1[3] = uStack_48;
          param_1[4] = uStack_44;
        }
        *param_1 = puVar5;
        DataMemoryBarrier(0xb);
        puVar3 = (undefined4 *)(*piVar2 + 0x108);
        do {
          piVar2 = (int *)*puVar3;
          bVar1 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar1);
        *puVar3 = 0;
        DataMemoryBarrier(0xb);
        if (piVar2 == (int *)&DAT_00000001) {
          return;
        }
        if (piVar2 == (int *)0x0) goto LAB_006a8608;
        (**(code **)(*piVar2 + 4))(piVar2[1]);
        goto LAB_006a85b0;
      }
    }
    iVar4 = *piVar2;
    if ((*(uint *)(iVar4 + 8) & 1) != 0) {
      do {
        if (*(int *)(iVar4 + 0xe4) == 0) {
          FUN_01642d70(&local_38,*(undefined4 *)(iVar4 + 0x1c));
          if (((uint)local_38 & 0xff) == 4) {
            *param_1 = &DAT_8000000d;
          }
          else if (((uint)local_38 & 0xff) == 5) {
            *param_1 = 0x8000000e;
          }
          else {
            *param_1 = &DAT_80000008;
            param_1[1] = local_38;
            param_1[2] = local_34;
          }
          goto LAB_006a856c;
        }
        FUN_00754020(&local_54,iVar4 + 0x10,param_3,iVar4 + 0xe0);
        if (((uint)local_54 & 0xff) == 5) {
          puVar5 = (undefined1 *)0x8000000e;
          goto LAB_006a8568;
        }
        if (((uint)local_54 & 0xff) != 4) {
          local_30 = local_50;
          local_34 = local_54;
          goto LAB_006a8558;
        }
      } while (local_50 != (undefined1 *)0x0);
      FUN_015e79d4(&local_34,0x17,"failed to write frame to transport",0x22);
LAB_006a8558:
      param_1[1] = local_34;
      param_1[2] = local_30;
      param_1[3] = uStack_2c;
      param_1[4] = uStack_28;
      puVar5 = &DAT_80000008;
LAB_006a8568:
      *param_1 = puVar5;
LAB_006a856c:
      DataMemoryBarrier(0xb);
      puVar3 = (undefined4 *)(*piVar2 + 0x108);
      do {
        piVar2 = (int *)*puVar3;
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = 0;
      DataMemoryBarrier(0xb);
      if (piVar2 == (int *)&DAT_00000001) {
        return;
      }
      if (piVar2 == (int *)0x0) {
LAB_006a8608:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00350078,0x16,&DAT_01871418);
      }
      (**(code **)(*piVar2 + 4))(piVar2[1]);
LAB_006a85b0:
      thunk_FUN_016d3fb4(piVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa444(&DAT_01871438);
}

