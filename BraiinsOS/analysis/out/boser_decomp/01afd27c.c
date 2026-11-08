// FUN_01afd27c @ 01afd27c size=532 calls_out=8 calls_in=20
// strings: cbb_add_child | /aws-lc/crypto/bytestring/cbb.c | cbb->child == NULL | cbb_add_child | /aws-lc/crypto/bytestring/cbb.c | !is_asn1 || len_len == 1

/* WARNING: Removing unreachable block (ram,0x01afc810) */

int FUN_01afd27c(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  int *local_30;
  int local_2c;
  
  local_30 = param_1;
  iVar1 = FUN_01afca7c();
  if (iVar1 != 0) {
    if ((param_3 & 0x1fffffff) < 0x1f) {
      iVar1 = FUN_01afd168(param_1,param_3 >> 0x18 & 0xffffffe0 | param_3 & 0xff);
    }
    else {
      uVar4 = FUN_01afd168(param_1,param_3 >> 0x18 | 0x1f);
      if ((int)uVar4 == 0) {
        return 0;
      }
      iVar1 = FUN_01afd1b0(param_1,(int)((ulonglong)uVar4 >> 0x20),param_3 & 0x1fffffff,0);
    }
    if (iVar1 != 0) {
      local_2c = DAT_01d53560;
      if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01be3310("cbb->child == NULL","/aws-lc/crypto/bytestring/cbb.c",0x11d,"cbb_add_child");
      }
      if ((char)param_1[1] == '\0') {
        piVar2 = param_1 + 2;
      }
      else {
        piVar2 = (int *)param_1[2];
      }
      iVar3 = piVar2[1];
      iVar1 = FUN_01afc604(piVar2,&local_30,1);
      if (iVar1 != 0) {
        piVar2[1] = piVar2[1] + 1;
        FUN_01afc704(local_30,1);
        FUN_01afc77c(param_2);
        *(undefined1 *)(param_2 + 4) = 1;
        *(int **)(param_2 + 8) = piVar2;
        *(int *)(param_2 + 0xc) = iVar3;
        *(undefined1 *)(param_2 + 0x10) = 1;
        *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0xfe | 1;
        *param_1 = param_2;
      }
      if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4();
      }
      return iVar1;
    }
  }
  return 0;
}

