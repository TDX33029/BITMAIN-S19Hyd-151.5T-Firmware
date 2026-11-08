// FUN_01289514 @ 01289514 size=520 calls_out=7 calls_in=1
// strings: /usr/share/zoneinfo | /share/zoneinfo/etc/zoneinfo/usr/share/lib/zoneinfo

void FUN_01289514(uint *param_1,char *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_r9;
  undefined4 uVar6;
  int iVar7;
  char local_50 [4];
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  
  if ((param_3 == 0) || (*param_2 != '/')) {
    iVar7 = 0;
    do {
      uVar6 = *(undefined4 *)((int)&DAT_01c25e38 + iVar7);
      iVar5 = *(int *)((int)&DAT_01c25e3c + iVar7);
      if (iVar5 < 0) {
        uVar3 = 0;
LAB_012896ac:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar3,unaff_r9);
      }
      if (iVar5 == 0) {
        iVar4 = 0;
        iVar2 = 1;
      }
      else {
        uVar3 = 1;
        iVar2 = FUN_01298504(iVar5,1);
        unaff_r9 = iVar5;
        if (iVar2 == 0) goto LAB_012896ac;
        iVar4 = iVar5;
      }
      FUN_01bed4e2(iVar2,uVar6,iVar5);
      FUN_019a66e4(&local_48,iVar2,iVar5,param_2,param_3);
      uVar1 = local_44;
      local_2c = 0;
      local_38 = 0;
      local_34 = 0x1b6;
      local_30 = 1;
      FUN_019a581c(local_50,&local_38,local_44,local_40);
      FUN_0134bd64(local_48,uVar1);
      if (local_50[0] == '\x04') {
        param_1[2] = 0x3b9aca10;
        *param_1 = local_4c;
        FUN_0134bd64(iVar4,iVar2);
        return;
      }
      FUN_0069d8a4(local_50[0],local_4c);
      iVar7 = iVar7 + 8;
      FUN_0134bd64(iVar4,iVar2);
      unaff_r9 = iVar2;
    } while (iVar7 != 0x20);
    param_1[1] = 0;
    param_1[2] = 0x3b9aca06;
    *param_1 = 1;
  }
  else {
    local_38 = 0;
    local_2c = 0;
    local_34 = 0x1b6;
    local_30 = 1;
    FUN_019a581c(&local_48,&local_38,param_2,param_3);
    if (((char)local_48 == '\x04') || ((local_48 & 0xff) == 4)) {
      param_1[2] = 0x3b9aca10;
      *param_1 = local_44;
    }
    else {
      *param_1 = local_48;
      param_1[1] = local_44;
      param_1[2] = 0x3b9aca06;
    }
  }
  return;
}

