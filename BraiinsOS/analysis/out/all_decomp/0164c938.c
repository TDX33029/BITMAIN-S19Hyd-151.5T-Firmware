// FUN_0164c938 @ 0164c938 size=1224 calls_out=21 calls_in=3
// strings: expected MultiThread scheduler | Oh no! We never placed the Core back; this is a bug! | not a CurrentThread handle | expected `CurrentThread::Context`there is no reactor running; must be called from the context of a Tokio 1.x runtime | core missing

void FUN_0164c938(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int extraout_r2;
  uint extraout_r3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint *puVar11;
  undefined8 uVar12;
  int local_74;
  int *local_70;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int *local_48;
  uint local_40;
  undefined4 uStack_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  
  if (*param_1 == 1) {
    if (param_1[6] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("expected MultiThread scheduler",0x3d,&DAT_018acb60);
    }
    iVar6 = param_1[7];
    pcVar4 = (char *)(iVar6 + 0x9c);
    if (*pcVar4 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar2) {
        *pcVar4 = '\x01';
        DataMemoryBarrier(0xb);
        goto LAB_0164c984;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    FUN_01280da8(pcVar4);
LAB_0164c984:
    FUN_0128236c(pcVar4);
    if (*(char *)(iVar6 + 0xb4) != '\0') {
      FUN_01282570(pcVar4);
      if (*pcVar4 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(pcVar4);
          if (bVar2) {
            *pcVar4 = '\0';
            return;
          }
        } while (*pcVar4 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(pcVar4);
      return;
    }
    *(undefined1 *)(iVar6 + 0xb4) = 1;
    FUN_01282570(pcVar4);
    if (*pcVar4 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(pcVar4);
        if (bVar2) {
          *pcVar4 = '\0';
          goto LAB_0164cb74;
        }
      } while (*pcVar4 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar4);
LAB_0164cb74:
    if (*(int *)(iVar6 + 0x4c) != 0) {
      iVar7 = *(int *)(iVar6 + 0x4c) << 3;
      puVar9 = (undefined4 *)(*(int *)(iVar6 + 0x48) + 4);
      do {
        FUN_0163a560(*puVar9,iVar6 + 0xb8);
        iVar7 = iVar7 + -8;
        puVar9 = puVar9 + 2;
      } while (iVar7 != 0);
    }
    return;
  }
  FUN_01657e94(&local_74,param_1[6],param_1[7]);
  if (param_1[6] == 1) {
    uVar8 = 0x35;
    puVar5 = &DAT_018accf0;
    pcVar4 = "not a CurrentThread handle";
LAB_0164cd88:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(pcVar4,uVar8,puVar5);
  }
  piVar3 = param_1 + 5;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = 0;
  DataMemoryBarrier(0xb);
  if (iVar6 == 0) {
    uVar8 = 0x69;
    puVar5 = &DAT_018acb70;
    pcVar4 = "Oh no! We never placed the Core back, this is a bug!";
    if (((DAT_018dd988 & 0x7fffffff) == 0) || (iVar6 = FUN_015bf3f8(), iVar6 != 0))
    goto LAB_0164cd88;
    goto LAB_0164ccc0;
  }
  piVar3 = (int *)param_1[7];
  do {
    iVar7 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar7 + 1;
  if (iVar7 < 0) goto LAB_0164ce10;
  local_4c = 0;
  local_50 = 4;
  local_54 = 0;
  local_58 = 0;
  local_60 = 0;
  local_5c = iVar6;
  local_48 = param_1 + 1;
  uVar12 = thunk_FUN_016de0ee(4,piVar3,0x40);
  local_64 = (undefined4)((ulonglong)uVar12 >> 0x20);
  puVar11 = (uint *)((int)uVar12 + extraout_r2);
  local_68 = extraout_r3;
  if ((char)puVar11[0xe] == '\x01') {
LAB_0164cab0:
    iVar7 = local_5c;
    if (0x7ffffffe < *puVar11) {
      FUN_00fb71b0(&DAT_018accb0);
LAB_0164ce10:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x164ce10);
      (*pcVar1)();
    }
    if (puVar11[1] != 2) {
      local_40 = local_68;
      uStack_3c = local_64;
      local_38 = local_60;
      local_34 = local_5c;
      local_30 = local_58;
      uStack_2c = local_54;
      uStack_28 = local_50;
      uStack_24 = local_4c;
      piStack_20 = local_48;
      if ((local_68 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("expected `CurrentThread::Context`there is no reactor running, must be called from the context of a Tokio 1.x runtime"
                     ,0x43,&DAT_018acbf0);
      }
      if (local_60 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb715c(&DAT_018acc20);
      }
      local_38 = 0xffffffff;
      local_34 = 0;
      if (local_5c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("core missing",0xc,&DAT_018acc00);
      }
      uVar10 = puVar11[8];
      iVar6 = param_1[7];
      local_38 = 0;
      puVar11[8] = (uint)&local_40;
      FUN_0164d400(local_5c,iVar6 + 0x80);
      iVar6 = local_34;
      puVar11[8] = uVar10;
      if (local_38 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb715c(&DAT_018acc10);
      }
      local_38 = -1;
      if (local_34 == 0) {
        local_38 = 0;
      }
      else {
        FUN_0164c578(local_34);
        thunk_FUN_016d3fb4(iVar6);
        local_38 = local_38 + 1;
      }
      local_34 = iVar7;
      FUN_0164cf50(&local_40);
      FUN_0164d1bc(&local_40);
      goto LAB_0164ccc0;
    }
  }
  else if ((char)puVar11[0xe] != '\x02') {
    FUN_015e8e6c(puVar11,FUN_01655ec4);
    *(undefined1 *)(puVar11 + 0xe) = 1;
    goto LAB_0164cab0;
  }
  local_5c = 0;
  local_60 = 0;
  FUN_0164d400(iVar6,param_1[7] + 0x80);
  iVar7 = local_5c;
  if (local_60 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018acb80);
  }
  if (local_5c != 0) {
    FUN_0164c578(local_5c);
    thunk_FUN_016d3fb4(iVar7);
  }
  local_60 = 0;
  local_5c = iVar6;
  FUN_0164cf50(&local_68);
  FUN_0164d1bc(&local_68);
LAB_0164ccc0:
  if (local_74 == 3) {
    return;
  }
  FUN_01639074(&local_74,local_6c);
  if (local_74 == 2) {
    return;
  }
  if (local_74 == 0) {
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *local_70;
      bVar2 = (bool)hasExclusiveAccess(local_70);
    } while (!bVar2);
    *local_70 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(local_70);
      return;
    }
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *local_70;
    bVar2 = (bool)hasExclusiveAccess(local_70);
  } while (!bVar2);
  *local_70 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016586fc(local_70);
    return;
  }
  return;
}

