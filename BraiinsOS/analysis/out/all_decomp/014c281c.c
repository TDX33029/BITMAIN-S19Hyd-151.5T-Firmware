// FUN_014c281c @ 014c281c size=1084 calls_out=6 calls_in=2
// strings: 

undefined8 FUN_014c281c(undefined4 *param_1,char *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  int local_a64;
  int local_a60;
  int local_a5c;
  int local_a58;
  uint local_a54;
  undefined2 local_a4c;
  undefined1 local_a4a;
  char *local_a48;
  int local_a44;
  uint local_a40;
  undefined4 uStack_a3c;
  undefined4 uStack_a38;
  undefined4 local_a34;
  undefined4 uStack_a30;
  undefined4 uStack_a2c;
  undefined4 uStack_a28;
  undefined4 uStack_a24;
  undefined4 uStack_a20;
  undefined4 local_a18;
  char *local_a14;
  int local_a10;
  int local_a0c;
  uint local_a08;
  int iStack_a04;
  undefined *local_a00;
  int *local_9fc;
  undefined1 local_9f8;
  int *local_68;
  int *local_64;
  undefined4 local_60;
  char *local_5c;
  int iStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  
  if (*param_2 == '\0') {
    piVar3 = (int *)thunk_FUN_016d4a50(1);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,1);
    }
    puVar6 = &UNK_018a61b4;
    *(undefined1 *)piVar3 = 0;
  }
  else {
    if (*param_2 == '\x01') {
      if (param_2[1] != '\0') {
        piVar5 = (int *)param_1[3];
        do {
          iVar4 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar4 + 1;
        if (iVar4 < 0) {
LAB_014c2c6c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x14c2c6c);
          (*pcVar1)();
        }
        (**(code **)(param_1[5] + 0xc))
                  (&local_a18,param_1[4] + (*(int *)(param_1[5] + 8) - 1U & 0xfffffff8) + 8,param_2)
        ;
        if ((char)local_a18 != '\x02') {
          local_a4a = local_a18._3_1_;
          local_a54 = local_a08;
          local_a58 = local_a0c;
          local_a4c = local_a18._1_2_;
          local_a48 = *(char **)param_2;
          local_a44 = *(int *)(param_2 + 4);
          local_a40 = *(uint *)(param_2 + 8);
          uStack_a3c = *(undefined4 *)(param_2 + 0xc);
          uStack_a38 = *(undefined4 *)(param_2 + 0x10);
          local_a34 = *(undefined4 *)(param_2 + 0x14);
          uStack_a30 = *(undefined4 *)(param_2 + 0x18);
          uStack_a2c = *(undefined4 *)(param_2 + 0x1c);
          uStack_a28 = *(undefined4 *)(param_2 + 0x20);
          uStack_a24 = *(undefined4 *)(param_2 + 0x24);
          uStack_a20 = *(undefined4 *)(param_2 + 0x28);
          local_68 = (int *)*param_1;
          do {
            iVar4 = *local_68;
            bVar2 = (bool)hasExclusiveAccess(local_68);
          } while (!bVar2);
          *local_68 = iVar4 + 1;
          if (-1 < iVar4) {
            local_64 = (int *)param_1[1];
            local_60 = param_1[2];
            do {
              iVar4 = *local_64;
              bVar2 = (bool)hasExclusiveAccess(local_64);
            } while (!bVar2);
            *local_64 = iVar4 + 1;
            if (-1 < iVar4) {
              local_30 = 0;
              local_5c = local_a48;
              iStack_58 = local_a44;
              uStack_54 = local_a40;
              uStack_50 = uStack_a3c;
              uStack_4c = uStack_a38;
              local_48 = local_a34;
              uStack_44 = uStack_a30;
              uStack_40 = uStack_a2c;
              uStack_3c = uStack_a28;
              uStack_38 = uStack_a24;
              uStack_34 = uStack_a20;
              iVar4 = thunk_FUN_016d4a50(0x9f0);
              if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(8,0x9f0);
              }
              FUN_016dd1aa(iVar4,&local_a18,0x9f0);
              local_a00 = &DAT_018a67f0;
              local_a0c = local_a58;
              local_a08 = local_a54;
              local_a18 = (char **)CONCAT13(local_a4a,CONCAT21(local_a4c,(char)local_a18));
              local_9f8 = 0;
              iStack_a04 = iVar4;
              local_9fc = piVar5;
              piVar3 = (int *)thunk_FUN_016d4a50(0x310);
              if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(8,0x310);
              }
              FUN_016dd1aa(piVar3,&local_a18,0x310);
              puVar6 = &UNK_018a61d4;
              goto LAB_014c28d4;
            }
          }
          goto LAB_014c2c6c;
        }
        local_a48 = local_a14;
        local_a40 = local_a40 & 0xffffff00;
        local_a44 = local_a10;
        piVar3 = (int *)thunk_FUN_016d4a50(0xc);
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        *piVar3 = (int)local_a48;
        piVar3[1] = local_a44;
        piVar3[2] = local_a40;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar4 + -1;
        puVar6 = &UNK_018a61e4;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01561b24(piVar5);
        }
        goto LAB_014c28cc;
      }
      if (*(char *)(param_1 + 6) == '\0') {
        local_a48 = *(char **)param_2;
        local_a44 = *(int *)(param_2 + 4);
        local_a40 = *(uint *)(param_2 + 8);
        uStack_a3c = *(undefined4 *)(param_2 + 0xc);
        uStack_a38 = *(undefined4 *)(param_2 + 0x10);
        local_a34 = *(undefined4 *)(param_2 + 0x14);
        uStack_a30 = *(undefined4 *)(param_2 + 0x18);
        uStack_a2c = *(undefined4 *)(param_2 + 0x1c);
        uStack_a28 = *(undefined4 *)(param_2 + 0x20);
        uStack_a24 = *(undefined4 *)(param_2 + 0x24);
        uStack_a20 = *(undefined4 *)(param_2 + 0x28);
        local_68 = (int *)*param_1;
        do {
          iVar4 = *local_68;
          bVar2 = (bool)hasExclusiveAccess(local_68);
        } while (!bVar2);
        *local_68 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_014c2c6c;
        local_60 = param_1[2];
        local_64 = (int *)param_1[1];
        do {
          iVar4 = *local_64;
          bVar2 = (bool)hasExclusiveAccess(local_64);
        } while (!bVar2);
        *local_64 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_014c2c6c;
        local_30 = 0;
        local_5c = local_a48;
        iStack_58 = local_a44;
        uStack_54 = local_a40;
        uStack_50 = uStack_a3c;
        uStack_4c = uStack_a38;
        local_48 = local_a34;
        uStack_44 = uStack_a30;
        uStack_40 = uStack_a2c;
        uStack_3c = uStack_a28;
        uStack_38 = uStack_a24;
        uStack_34 = uStack_a20;
        iVar4 = thunk_FUN_016d4a50(0x9f0);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x9f0);
        }
        FUN_016dd1aa(iVar4,&local_a18,0x9f0);
        local_a08 = local_a08 & 0xffffff00;
        local_a14 = &DAT_018a67f0;
        local_a18 = (char **)iVar4;
        piVar3 = (int *)thunk_FUN_016d4a50(0x14);
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x14);
        }
        puVar6 = &UNK_018a61c4;
        *piVar3 = (int)local_a18;
        piVar3[1] = (int)local_a14;
        piVar3[2] = local_a10;
        piVar3[3] = local_a0c;
        piVar3[4] = local_a08;
        goto LAB_014c28d4;
      }
    }
    local_a14 = "";
    local_a18 = &local_a48;
    local_a48 = param_2;
    FUN_00600d2c(&local_a64,&DAT_0057c4b3,&local_a18);
    piVar3 = (int *)thunk_FUN_016d4a50(0x10);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    *piVar3 = local_a64;
    piVar3[1] = local_a60;
    puVar6 = &UNK_018a61f4;
    *(undefined1 *)(piVar3 + 3) = 0;
    piVar3[2] = local_a5c;
  }
LAB_014c28cc:
  FUN_0145d5e0(param_2);
LAB_014c28d4:
  return CONCAT44(puVar6,piVar3);
}

