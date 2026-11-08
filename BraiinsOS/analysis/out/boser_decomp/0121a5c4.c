// FUN_0121a5c4 @ 0121a5c4 size=636 calls_out=12 calls_in=0
// strings: Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks. | failed to park thread

void FUN_0121a5c4(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_68;
  uint local_50;
  uint local_4c;
  undefined4 uStack_48;
  uint uStack_44;
  int local_40;
  uint local_3c;
  uint uStack_38;
  undefined4 local_34;
  uint local_30;
  undefined8 local_2c;
  
  puVar7 = (uint *)*param_2;
  uVar8 = thunk_FUN_01bee35a(param_1,0x20);
  iVar3 = (int)uVar8 + (int)((ulonglong)uVar8 >> 0x20);
  uVar5 = *puVar7;
  uVar6 = puVar7[1];
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    if (*(char *)(iVar3 + 0x38) == '\x02') goto LAB_0121a600;
    FUN_019a2bcc(iVar3,&LAB_019efb68);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  if (*(char *)(iVar3 + 0x32) == '\x02') {
    iVar2 = 0x1f0;
    if ((uVar5 & 1) != 0) {
      iVar2 = 0x128;
    }
    *(undefined1 *)(iVar3 + 0x32) = 1;
    uVar8 = FUN_019f7c78(uVar6 + iVar2);
    if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
      uVar9 = FUN_019e9e08();
      local_68 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_44 = 1;
      if (1 < (uint)uVar9) {
        uStack_44 = (uint)uVar9;
      }
    }
    else {
      local_68 = *(undefined4 *)(iVar3 + 0x28);
      uStack_44 = *(uint *)(iVar3 + 0x2c);
    }
    *(undefined8 *)(iVar3 + 0x28) = uVar8;
    *(undefined4 *)(iVar3 + 0x24) = 1;
    FUN_019ec774(&local_40,iVar3,uVar5,uVar6);
    local_34 = local_68;
    local_50 = local_3c;
    local_4c = uStack_38;
    uStack_48 = local_68;
    local_30 = uStack_44;
    if (local_40 == 4) {
LAB_0121a600:
                    /* WARNING: Subroutine does not return */
      FUN_019b0950(&DAT_01d301c0);
    }
    if (local_40 != 3) {
      uVar8 = FUN_019ee710();
      if ((int)uVar8 != 0) {
        local_2c = uVar8;
        do {
          cVar4 = *(char *)(iVar3 + 0x38);
          if (cVar4 == '\x01') {
LAB_0121a74c:
            cVar4 = *(char *)(iVar3 + 0x30);
            uVar6 = (uint)*(byte *)(iVar3 + 0x31);
            *(undefined2 *)(iVar3 + 0x30) = 0x8001;
          }
          else if (cVar4 != '\x02') {
            FUN_019a2bcc(iVar3,&LAB_019efb68);
            *(undefined1 *)(iVar3 + 0x38) = 1;
            goto LAB_0121a74c;
          }
          FUN_01209a90(&local_50,puVar7[3],&local_2c,param_3,param_4);
          if (cVar4 != '\x02') {
            if (*(char *)(iVar3 + 0x38) != '\x01') {
              if (*(char *)(iVar3 + 0x38) == '\x02') goto LAB_0121a7b0;
              FUN_019a2bcc(iVar3,&LAB_019efb68);
              *(undefined1 *)(iVar3 + 0x38) = 1;
            }
            *(char *)(iVar3 + 0x31) = (char)uVar6;
            *(char *)(iVar3 + 0x30) = cVar4;
          }
LAB_0121a7b0:
          uVar1 = local_4c;
          uVar5 = local_50;
          if ((local_50 & 0xff) != 5) goto LAB_0121a7c4;
          FUN_019ee698();
        } while( true );
      }
      goto LAB_0121a818;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
               ,0x183,&DAT_01c23cdc);
LAB_0121a7c4:
  (**(code **)((int)uVar8 + 0xc))((int)((ulonglong)uVar8 >> 0x20));
  if ((uVar5 & 0xff) != 5) {
    *param_1 = uVar5;
    param_1[1] = uVar1;
    FUN_0120e714(&local_40);
    return;
  }
LAB_0121a818:
                    /* WARNING: Subroutine does not return */
  FUN_013073dc("failed to park thread",0x15,&local_50,&DAT_01d29600,&DAT_01c23cfc);
}

