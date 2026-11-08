// FUN_016e1884 @ 016e1884 size=556 calls_out=6 calls_in=21
// strings: cbb_add_child | /aws-lc/crypto/bytestring/cbb.c | cbb->child == NULL

int FUN_016e1884(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *local_20;
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar2 = FUN_016e1048();
  if (iVar2 != 0) {
    uVar6 = param_3 & 0x1fffffff;
    if (uVar6 < 0x1f) {
      iVar2 = FUN_016e17e0(param_1,param_3 >> 0x18 & 0xffffffe0 | param_3 & 0xff);
      if (iVar2 != 0) {
LAB_016e1900:
        if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2c94("cbb->child == NULL","/aws-lc/crypto/bytestring/cbb.c",0x11d,"cbb_add_child")
          ;
        }
        if ((char)param_1[1] == '\0') {
          piVar4 = param_1 + 2;
        }
        else {
          piVar4 = (int *)param_1[2];
        }
        iVar7 = piVar4[1];
        iVar2 = FUN_016e0d7c(piVar4,&local_20,1);
        if (iVar2 != 0) {
          piVar4[1] = piVar4[1] + 1;
          *local_20 = 0;
          FUN_016e0e8c(param_2);
          *(int **)(param_2 + 8) = piVar4;
          *(undefined1 *)(param_2 + 4) = 1;
          *(int *)(param_2 + 0xc) = iVar7;
          *(ushort *)(param_2 + 0x10) = *(ushort *)(param_2 + 0x10) & 0xfe00 | 0x101;
          *param_1 = param_2;
        }
        goto LAB_016e19a8;
      }
    }
    else {
      iVar2 = FUN_016e17e0(param_1,param_3 >> 0x18 | 0x1f);
      if (iVar2 != 0) {
        uVar3 = 0;
        uVar5 = uVar6;
        do {
          uVar5 = uVar5 >> 7;
          uVar3 = uVar3 + 1;
        } while (uVar5 != 0);
        if (uVar3 == 0) {
          uVar3 = 1;
        }
        uVar5 = uVar3 - 1;
        do {
          uVar1 = uVar6 >> (uVar5 * 7 & 0xff);
          if (uVar5 == 0) {
            iVar2 = FUN_016e17e0(param_1,uVar1 & 0x7f);
            if (iVar2 == 0) goto LAB_016e19a4;
            break;
          }
          iVar2 = FUN_016e17e0(param_1,~(~(uVar1 << 0x19) >> 0x19) & 0xff);
          if (iVar2 == 0) goto LAB_016e19a4;
          uVar5 = uVar5 - 1;
        } while (uVar5 < uVar3);
        goto LAB_016e1900;
      }
    }
  }
LAB_016e19a4:
  iVar2 = 0;
LAB_016e19a8:
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return iVar2;
}

