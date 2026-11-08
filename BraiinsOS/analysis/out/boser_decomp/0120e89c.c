// FUN_0120e89c @ 0120e89c size=784 calls_out=12 calls_in=2
// strings: Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks. | failed to park thread

void FUN_0120e89c(uint *param_1,uint param_2,int param_3,int *param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint local_6c;
  uint local_68;
  undefined1 local_64;
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
  
  uVar9 = thunk_FUN_01bee35a(param_1,0x20);
  iVar3 = (int)uVar9 + (int)((ulonglong)uVar9 >> 0x20);
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    if (*(char *)(iVar3 + 0x38) == '\x02') goto LAB_0120e8d4;
    FUN_019a2bcc(iVar3,&LAB_019efb68);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  if (*(char *)(iVar3 + 0x32) == '\x02') {
    iVar2 = 0x1f0;
    if ((param_2 & 1) != 0) {
      iVar2 = 0x128;
    }
    *(undefined1 *)(iVar3 + 0x32) = 1;
    uVar9 = FUN_019f7c78(param_3 + iVar2);
    if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
      uVar10 = FUN_019e9e08();
      uStack_48 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uStack_44 = 1;
      if (1 < (uint)uVar10) {
        uStack_44 = (uint)uVar10;
      }
    }
    else {
      uStack_48 = *(undefined4 *)(iVar3 + 0x28);
      uStack_44 = *(uint *)(iVar3 + 0x2c);
    }
    *(undefined4 *)(iVar3 + 0x24) = 1;
    *(undefined8 *)(iVar3 + 0x28) = uVar9;
    FUN_019ec774(&local_40,iVar3,param_2,param_3);
    local_50 = local_3c;
    local_4c = uStack_38;
    local_34 = uStack_48;
    local_30 = uStack_44;
    if (local_40 == 4) {
LAB_0120e8d4:
                    /* WARNING: Subroutine does not return */
      FUN_019b0950(&DAT_01d301c0);
    }
    if (local_40 != 3) {
      local_2c = FUN_019ee710();
      uVar1 = (ulonglong)local_2c >> 0x20;
      iVar2 = (int)local_2c;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("failed to park thread",0x15,&local_50,&DAT_01d29600,&DAT_01c23cfc);
      }
      iVar5 = *param_4;
      iVar4 = param_4[1];
      uVar7 = param_4[2];
      do {
        cVar6 = *(char *)(iVar3 + 0x38);
        if (cVar6 == '\x01') {
LAB_0120ea20:
          cVar6 = *(char *)(iVar3 + 0x30);
          local_64 = *(undefined1 *)(iVar3 + 0x31);
          *(undefined2 *)(iVar3 + 0x30) = 0x8001;
        }
        else if (cVar6 != '\x02') {
          FUN_019a2bcc(iVar3,&LAB_019efb68);
          *(undefined1 *)(iVar3 + 0x38) = 1;
          goto LAB_0120ea20;
        }
        do {
          if (uVar7 == 0) {
            uVar8 = 4;
            goto LAB_0120eac8;
          }
          FUN_01209a90(&local_50,*(undefined4 *)(iVar5 + 4),&local_2c,iVar4,uVar7);
          if ((local_50 & 0xff) == 5) {
            uVar8 = 5;
            goto LAB_0120eac8;
          }
          uVar8 = local_50 & 0xff;
          if (uVar8 != 4) {
            local_68 = local_50 >> 8 | local_4c << 0x18;
            local_6c = local_4c >> 8;
            goto LAB_0120eac8;
          }
          if (uVar7 < local_4c) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d20b98);
          }
          uVar7 = uVar7 - local_4c;
          iVar4 = iVar4 + local_4c;
        } while (local_4c != 0);
        uVar8 = 1;
        local_6c = 0;
        local_68 = 0x17;
LAB_0120eac8:
        if (cVar6 != '\x02') {
          if (*(char *)(iVar3 + 0x38) != '\x01') {
            if (*(char *)(iVar3 + 0x38) == '\x02') goto LAB_0120eb08;
            FUN_019a2bcc(iVar3,&LAB_019efb68);
            *(undefined1 *)(iVar3 + 0x38) = 1;
          }
          *(undefined1 *)(iVar3 + 0x31) = local_64;
          *(char *)(iVar3 + 0x30) = cVar6;
        }
LAB_0120eb08:
        if (uVar8 != 5) {
          (**(code **)(iVar2 + 0xc))((int)uVar1);
          *param_1 = uVar8 | local_68 << 8;
          param_1[1] = local_6c << 8 | local_68 >> 0x18;
          FUN_0120e714(&local_40);
          return;
        }
        FUN_019ee698();
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
               ,0x183,&DAT_01c23cec);
}

