// FUN_019ef484 @ 019ef484 size=624 calls_out=7 calls_in=1
// strings: 

int FUN_019ef484(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  undefined8 uVar11;
  undefined1 local_28;
  
  if (*(char *)(param_3 + 0x65) != '\0') {
    iVar4 = *(int *)(*param_1 + 8);
    *(undefined1 *)(param_3 + 0x65) = 0;
    puVar7 = (uint *)(iVar4 + 0x80);
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *puVar7;
      bVar2 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar2);
    *puVar7 = uVar6 - 1;
    DataMemoryBarrier(0xb);
    if ((uVar6 & 0xffff) == 1) {
      FUN_019ec500(iVar4 + 8);
    }
  }
  iVar4 = param_1[1];
  *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
  if (iVar4 != 0) {
    FUN_01306fc8(&DAT_01d29780);
    goto LAB_019ef6f0;
  }
  param_1[1] = -1;
  if (param_1[2] == 0) {
    iVar9 = 0;
    iVar4 = 0;
  }
  else {
    FUN_019eeaa0();
    iVar4 = param_1[1];
    iVar9 = iVar4 + 1;
  }
  param_1[1] = iVar9;
  param_1[2] = param_3;
  uVar11 = thunk_FUN_01bee35a(iVar4,0x20);
  iVar4 = (int)uVar11 + (int)((ulonglong)uVar11 >> 0x20);
  if (*(char *)(iVar4 + 0x38) == '\x01') {
LAB_019ef578:
    cVar10 = *(char *)(iVar4 + 0x30);
    local_28 = *(undefined1 *)(iVar4 + 0x31);
    *(undefined2 *)(iVar4 + 0x30) = 0x8001;
  }
  else {
    if (*(char *)(iVar4 + 0x38) != '\x02') {
      FUN_019a2bcc(iVar4,&LAB_019efb68);
      *(undefined1 *)(iVar4 + 0x38) = 1;
      goto LAB_019ef578;
    }
    cVar10 = '\x02';
  }
  (*(code *)**(undefined4 **)(param_2 + 8))(param_2);
  if (param_1[1] == 0) {
    uVar6 = 1;
    do {
      iVar9 = param_1[2];
      param_1[1] = 0;
      param_1[2] = 0;
      if (iVar9 == 0) {
        iVar9 = 0;
LAB_019ef698:
        if (cVar10 != '\x02') {
          if (*(char *)(iVar4 + 0x38) != '\x01') {
            if (*(char *)(iVar4 + 0x38) == '\x02') {
              return iVar9;
            }
            FUN_019a2bcc(iVar4,&LAB_019efb68);
            *(undefined1 *)(iVar4 + 0x38) = 1;
          }
          *(undefined1 *)(iVar4 + 0x31) = local_28;
          *(char *)(iVar4 + 0x30) = cVar10;
        }
        return iVar9;
      }
      iVar8 = *(int *)(iVar9 + 0x58);
      *(undefined4 *)(iVar9 + 0x58) = 0;
      if (iVar8 == 0) {
        *(byte *)(iVar9 + 100) = *(byte *)(*(int *)(*param_1 + 8) + 0x44) ^ 1;
        goto LAB_019ef698;
      }
      bVar3 = FUN_019ec70c();
      if ((bVar3 != 2) && ((bVar3 & 1) == 0)) {
        FUN_019e5c10(iVar9 + 0x50,iVar8,*(int *)(*param_1 + 8) + 8);
        goto LAB_019ef698;
      }
      if (2 < uVar6) {
        *(undefined1 *)(iVar9 + 100) = 0;
      }
      if (param_1[1] != 0) {
        FUN_01306fc8(&DAT_01d297a0);
        goto LAB_019ef6f0;
      }
      param_1[1] = -1;
      if (param_1[2] == 0) {
        iVar5 = 0;
      }
      else {
        FUN_019eeaa0();
        iVar5 = param_1[1] + 1;
      }
      param_1[1] = iVar5;
      param_1[2] = iVar9;
      (*(code *)**(undefined4 **)(iVar8 + 8))(iVar8);
      uVar6 = uVar6 + 1;
    } while (param_1[1] == 0);
  }
  FUN_01306fc8(&DAT_01d29790);
LAB_019ef6f0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x19ef6f0);
  (*pcVar1)();
}

