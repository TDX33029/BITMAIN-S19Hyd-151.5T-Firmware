// FUN_019eb864 @ 019eb864 size=808 calls_out=16 calls_in=2
// strings: A Tokio 1.x context was found; but it is being shutdown. | inner has gone away | inner has gone away

void FUN_019eb864(undefined4 *param_1,int *param_2,int *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  char **ppcVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  uint local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 *local_38;
  undefined1 *puStack_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  
  if (*param_2 == 3) {
    ppcVar9 = &local_2c;
    do {
      cVar4 = FUN_019fa210(param_2 + 8,param_3);
      if (param_2[1] == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("inner has gone away",0x13,&DAT_01d28e44);
      }
      FUN_019ea8f8(&local_30,param_2 + 1);
      if (local_30 == (char *)0x1) goto LAB_019eb9c8;
      if (local_2c == &DAT_00000001) goto LAB_019eba14;
    } while (cVar4 != '\x02');
  }
  else {
    if (*param_2 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("inner has gone away",0x13,&DAT_01d29960);
    }
    piVar8 = (int *)param_2[9];
    FUN_019e7220(&local_54,piVar8,param_3,0);
    if (local_54 != 2) {
      ppcVar9 = &local_50;
      if ((local_54 & 1) != 0) {
        if ((char)local_50 == '\x03') {
          uVar7 = *(undefined4 *)local_4c;
          iVar10 = *(int *)(local_4c + 4);
          cVar4 = FUN_005ef5e8(ppcVar9);
          if ((cVar4 == '(') && (iVar6 = (**(code **)(iVar10 + 0x18))(uVar7), iVar6 == 0)) {
            local_28 = (char *)((uint)local_28 & 0xffffff00);
            puStack_34 = &LAB_012c1d70;
            local_30 = "A Tokio 1.x context was found, but it is being shutdown.";
            local_2c = (char *)0x38;
            local_38 = &local_40;
            local_40 = uVar7;
            local_3c = iVar10;
            FUN_012fa178(&local_30,&DAT_01d29a40,&DAT_00590e5f,&local_38);
            bVar11 = local_2c == (char *)0x0;
            if (bVar11) {
              local_2c = (char *)((uint)local_28 & 0xff);
            }
            if (bVar11 && ((uint)local_2c & 1) == 0) {
              local_30 = local_50;
              local_2c = local_4c;
              FUN_0069603c(&local_30);
              goto LAB_019eba3c;
            }
          }
        }
LAB_019eb9c8:
        local_2c = *ppcVar9;
        local_28 = ppcVar9[1];
LAB_019eb9cc:
        *param_1 = local_2c;
        param_1[1] = local_28;
        return;
      }
      local_48 = local_50;
      local_44 = local_4c;
      FUN_019ea8f8(&local_30,param_2);
      if (local_30 != (char *)0x0) goto LAB_019eb9cc;
      if (local_2c == &DAT_00000001) {
LAB_019eba14:
        param_1[1] = local_28;
        uVar5 = 4;
        goto LAB_019eba20;
      }
      piVar8 = (int *)param_2[9];
      FUN_019e0788(piVar8 + 8,&local_48);
LAB_019eba3c:
      iVar10 = param_2[10];
      if (iVar10 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d28ea4);
      }
      FUN_019e7070(&local_30,param_2 + 7,iVar10);
      if (((uint)local_30 & 0xff) != 4) {
        FUN_0069263c((uint)local_30 & 0xff,local_2c);
      }
      uVar12 = FUN_019ef7f4(&DAT_01d28eb4);
      FUN_019e74d4(&local_30,iVar10,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20),&DAT_01d28ec4);
      pcVar3 = local_28;
      pcVar2 = local_2c;
      pcVar1 = local_30;
      if (local_30 == (char *)0x2) {
        if (((uint)local_2c & 0xff) != 4) {
          *param_1 = local_2c;
          param_1[1] = local_28;
          return;
        }
      }
      else {
        FUN_019e8cd0(piVar8);
        FUN_014397e4(param_2[7],param_2[8]);
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar8;
          bVar11 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar11);
        *piVar8 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_019db52c(param_2[9]);
        }
        param_2[8] = (int)pcVar2;
        param_2[7] = (int)pcVar1;
        param_2[9] = (int)pcVar3;
      }
      (**(code **)(*(int *)*param_3 + 8))(((int *)*param_3)[1]);
    }
  }
  uVar5 = 5;
LAB_019eba20:
  *(undefined1 *)param_1 = uVar5;
  return;
}

