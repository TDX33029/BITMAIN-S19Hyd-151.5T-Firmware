// FUN_018f86c0 @ 018f86c0 size=704 calls_out=16 calls_in=1
// strings: 

void FUN_018f86c0(undefined4 *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 local_17c;
  undefined1 auStack_178 [136];
  int local_f0 [34];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  pcVar9 = *(char **)(param_2 + 2);
  uVar8 = 0x19f;
  cVar1 = *pcVar9;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar1) {
  case '\x01':
    uVar8 = 0x2cb;
    break;
  case '\x02':
    uVar8 = 0x2cc;
    break;
  case '\x03':
    iVar4 = FUN_01b48014(0x3b4,0);
    if (iVar4 == 0) goto LAB_018f8880;
    iVar5 = FUN_01b488f0();
    if (iVar5 == 1) {
      local_f0[0] = 0;
      iVar6 = FUN_01b4898c(iVar4,local_f0);
      iVar5 = local_f0[0];
      if (iVar6 == 1) {
        FUN_01b47028(iVar4);
        if (iVar5 == 0) goto LAB_018f8880;
        FUN_01bed93e(local_f0,0,0x85);
        local_48 = 0x85;
        iVar4 = FUN_01b47dfc(iVar5,local_f0,&local_48);
        local_17c = local_48;
        if (iVar4 == 1) {
          FUN_00703cfc(iVar5);
          FUN_01bed4e2(auStack_178,local_f0,0x85);
          uVar8 = 3;
          goto LAB_018f88f8;
        }
        goto LAB_018f8970;
      }
    }
    goto LAB_018f8878;
  }
  iVar4 = FUN_01b48014(0x198,0);
  if (iVar4 != 0) {
    iVar5 = FUN_01b488f0();
    if ((iVar5 == 1) && (iVar5 = FUN_01b48cd8(iVar4,uVar8), iVar5 == 1)) {
      local_f0[0] = 0;
      iVar6 = FUN_01b4898c(iVar4,local_f0);
      iVar5 = local_f0[0];
      if (iVar6 == 1) {
        FUN_01b47028(iVar4);
        if (iVar5 != 0) {
          uVar8 = 0;
          if (cVar1 != '\0') {
            if (cVar1 == '\x02') {
              uVar8 = 2;
            }
            else {
              uVar8 = 1;
            }
          }
          FUN_01bed93e(local_f0,0,0x85);
          FUN_01afc9a8(&local_68,local_f0,0x85);
          iVar4 = FUN_007044a8(&local_68,iVar5);
          if (iVar4 == 0) {
            local_48 = local_68;
            uStack_44 = uStack_64;
            uStack_40 = uStack_60;
            local_3c = local_5c;
            uStack_38 = uStack_58;
            uStack_34 = uStack_54;
            uStack_30 = uStack_50;
            local_2c = 0;
            local_28 = 0;
            iVar4 = FUN_01afcd14(&local_48,&local_2c,&local_28);
            local_17c = local_28;
            FUN_01afca0c(&local_48);
            if (iVar4 == 1) {
              FUN_00703cfc(iVar5);
              FUN_01bed4e2(auStack_178,local_f0,0x85);
LAB_018f88f8:
              FUN_01bed4e2(local_f0,auStack_178,0x85);
              uVar10 = *(undefined4 *)(param_2 + 4);
              uVar2 = param_2[1];
              uVar3 = *param_2;
              puVar7 = (undefined4 *)thunk_FUN_01be5118(0xa8);
              if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(4,0xa8);
              }
              *puVar7 = uVar8;
              puVar7[1] = iVar5;
              puVar7[2] = uVar8;
              puVar7[3] = iVar5;
              puVar7[4] = local_17c;
              FUN_01bed4e2(puVar7 + 5,local_f0,0x85);
              puVar7[0x28] = pcVar9;
              puVar7[0x29] = uVar10;
              *(undefined2 *)((int)puVar7 + 0x9e) = uVar2;
              *(undefined2 *)(puVar7 + 0x27) = uVar3;
              *param_1 = 0x80000029;
              param_1[1] = puVar7;
              param_1[2] = &DAT_01d24a70;
              return;
            }
          }
          else {
            FUN_01afca0c(&local_68);
          }
LAB_018f8970:
          *param_1 = 0x80000022;
          FUN_01b46fd8(iVar5);
          return;
        }
        goto LAB_018f8880;
      }
    }
LAB_018f8878:
    FUN_01b47028(iVar4);
  }
LAB_018f8880:
  *param_1 = 0x80000022;
  return;
}

